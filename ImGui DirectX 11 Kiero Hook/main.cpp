// includes
#include <iostream>
#include <intrin.h>

// my includes
#include <Utils/Includes.h>
#include <Utils/Utils.h>
#include <Libraries/Fonts/Font.h>
#include <Libraries/kiero/minhook/include/MinHook.h>
#include <Core/HooksFunctions.h>
#include <Core/Cheats.h>
#include <Libraries/luaaa.hpp>

using namespace Variables;
using namespace luaaa;

#pragma region ImGui
	extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

	Present oPresent;
	HWND window = NULL;
	WNDPROC oWndProc;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* mainRenderTargetView;
#pragma endregion

static void EnableHooks() {

	// EXAMPLE
	//// Health__TakeDamage
	//if (MH_CreateHook(reinterpret_cast<LPVOID*>(
	//	Offsets::Health__TakeDamage_Offset),
	//	&HooksFunctions::Health__TakeDamage_hook,
	//	(LPVOID*)&HooksFunctions::Health__TakeDamage) == MH_OK)
	//{
	//	MH_EnableHook(reinterpret_cast<LPVOID*>(Offsets::Health__TakeDamage_Offset));
	//}
}

static void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

static bool InitVars() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);
	std::cout << "\n*******************************************************************************" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	std::cout << R"(  
     __  __     __     ______     ______     ______     _____     ______    
    /\ \/ /    /\ \   /\  __ \   /\  ___\   /\  __ \   /\  __-.  /\  ___\    
    \ \  _'-.  \ \ \  \ \ \/\ \  \ \ \____  \ \ \/\ \  \ \ \/\ \ \ \  __\   
     \ \_\ \_\  \ \_\  \ \_____\  \ \_____\  \ \_____\  \ \____-  \ \_____\    
      \/_/\/_/   \/_/   \/_____/   \/_____/   \/_____/   \/____/   \/_____/
    )" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);
	std::cout << "\n*******************************************************************************\n" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);

	// GET WORLD AND ENGINE
	CheatVariables::World = SDK::UWorld::GetWorld();
	if (Utils::IsBadPoint(CheatVariables::World)) {
		std::cerr << "Error: World not found" << std::endl;
		return false;
	}
	std::cout << "World address: " << CheatVariables::World << std::endl;

	CheatVariables::Engine = SDK::UEngine::GetEngine();
	if (Utils::IsBadPoint(CheatVariables::Engine)) {
		std::cerr << "Error: Engine not found" << std::endl;
		return false;
	}
	std::cout << "Engine address: " << CheatVariables::Engine << std::endl;

	// Init PlayerController
	if (Utils::IsBadPoint(CheatVariables::World->OwningGameInstance)) {
		std::cerr << "Error: OwningGameInstance not found" << std::endl;
		return false;
	}
	if (Utils::IsBadPoint(CheatVariables::World->OwningGameInstance->LocalPlayers[0])) {
		std::cerr << "Error: LocalPlayers[0] not found" << std::endl;
		return false;
	}
	CheatVariables::MyController = CheatVariables::World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	if (Utils::IsBadPoint(CheatVariables::MyController)) {
		std::cerr << "Error: MyController not found" << std::endl;
		return false;
	}
	std::cout << "PlayerController address: " << CheatVariables::MyController << std::endl;

	// Init PlayerArray
	if (Utils::IsBadPoint(CheatVariables::World->GameState)) {
		std::cerr << "Error: GameState not found" << std::endl;
		return false;
	}
	CheatVariables::PlayerArray = CheatVariables::World->GameState->PlayerArray;
	if (!CheatVariables::PlayerArray) {
		std::cerr << "Error: PlayerArray not found" << std::endl;
		return false;
	}

	if (CheatVariables::PlayerArray.Num() > 0) {
		std::cout << "PlayerArray found and not empty" << std::endl;
	}
	else {
		std::cout << "PlayerArray found, but empty" << std::endl;
	}

	for (int i = 0; i < CheatVariables::PlayerArray.Num(); ++i) {
		if (Utils::IsBadPoint(CheatVariables::PlayerArray[i])) {
			std::cerr << "Error: PlayerArray[" << i << "] not found" << std::endl;
		}
		else {
			std::cout << "PlayerArray[" << i << "] address: " << CheatVariables::PlayerArray[i] << std::endl;
		}
	}

	// Init Pawn
	CheatVariables::MyPawn = CheatVariables::MyController->AcknowledgedPawn;
	if (CheatVariables::MyPawn == nullptr) {
		std::cerr << "Error: MyPawn not found" << std::endl;
		return false;
	}
	std::cout << "MyPawn address: " << CheatVariables::MyPawn << std::endl;

	return true;
}


static void HandleInputs() {
	if (GetAsyncKeyState(KEYS::SHOWMENU_KEY) & 1)
	{
		CheatMenuVariables::ShowMenu = !CheatMenuVariables::ShowMenu;
	}

	if (GetAsyncKeyState(KEYS::DEATTACH_KEY) & 1)
	{
		MH_DisableHook(MH_ALL_HOOKS);
		MH_Uninitialize();
		CheatMenuVariables::ShowMenu = false;

		if (Lua::LuaState != NULL)
		{
			lua_close(Lua::LuaState);
		}
	}
}

static LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (CheatMenuVariables::ShowMenu && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	if (CheatMenuVariables::ShowMenu)
		return true;

	return CallWindowProcA(oWndProc, hWnd, uMsg, wParam, lParam);
}

static bool UpdateSDK() {

	// GET WORLD AND ENGINE
	CheatVariables::World = SDK::UWorld::GetWorld();
	if (Utils::IsBadPoint(CheatVariables::World)) {
		return false;
	}

	CheatVariables::Engine = SDK::UEngine::GetEngine();
	if (Utils::IsBadPoint(CheatVariables::Engine)) {
		return false;
	}

	// Init PlayerController
	if (Utils::IsBadPoint(CheatVariables::World->OwningGameInstance)) {
		return false;
	}
	if (Utils::IsBadPoint(CheatVariables::World->OwningGameInstance->LocalPlayers[0])) {
		return false;
	}
	CheatVariables::MyController = CheatVariables::World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	if (Utils::IsBadPoint(CheatVariables::MyController)) {
		return false;
	}

	// Init PlayerArray
	if (Utils::IsBadPoint(CheatVariables::World->GameState)) {
		return false;
	}
	CheatVariables::PlayerArray = CheatVariables::World->GameState->PlayerArray;
	if (!CheatVariables::PlayerArray) {
		return false;
	}

	// Init Pawn
	CheatVariables::MyPawn = CheatVariables::MyController->AcknowledgedPawn;
	if (CheatVariables::MyPawn == nullptr) {
		return false;
	}

	return true;
}

static HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	#pragma region Attach+Init

		if (!System::Init)
		{
			if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
			{
				pDevice->GetImmediateContext(&pContext);
				DXGI_SWAP_CHAIN_DESC sd;
				pSwapChain->GetDesc(&sd);
				window = sd.OutputWindow;
				ID3D11Texture2D* pBackBuffer = nullptr;
				pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
				pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
				pBackBuffer->Release();
				oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
				InitImGui();
				ImGui::GetIO().Fonts->AddFontDefault();
				ImFontConfig font_cfg;
				font_cfg.GlyphExtraSpacing.x = 1.2;
				gameFont = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(TTSquaresCondensedBold, 14, 14, &font_cfg);
				ImGui::GetIO().Fonts->AddFontDefault();
				
				System::Init = true;
			}
			else {
				return oPresent(pSwapChain, SyncInterval, Flags);
			}
		}

		pContext->RSGetViewports(&System::vps, &System::Viewport);
		System::ScreenSize = { System::Viewport.Width, System::Viewport.Height };
		System::ScreenCenter = { System::Viewport.Width / 2.0f, System::Viewport.Height / 2.0f };
	#pragma endregion

	#pragma region BeginScene

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

	#pragma endregion

	#pragma region Watermark
		if (CheatMenuVariables::Watermark)
		{
			Utils::DrawOutlinedText(gameFont, ImVec2(System::ScreenCenter.x, System::ScreenSize.y - 20), 13.0f, CheatVariables::RainbowColor, true, Prefix.c_str());
			Utils::DrawOutlinedText(gameFont, ImVec2(System::ScreenCenter.x, 5), 13.0f, CheatVariables::RainbowColor, true, "[ %.1f FPS ]", ImGui::GetIO().Framerate);
		}
	#pragma endregion

	if (UpdateSDK()) {
		Utils::FetchObjects();
	}

	#pragma region CHEATS

		GetCursorPos(&System::MousePos);
		ScreenToClient(window, &System::MousePos);

		HandleInputs();

		// Main cheats loop
		try { CheatsLoop(); }
		catch (...) {}

		if (CheatMenuVariables::ShowMenu)
		{
			DrawMouse();

			DrawMenu();
		}

		DrawCrosshair();

		if (CheatMenuVariables::AimbotFOVCheck) {
			ImGui::GetForegroundDrawList()->AddCircle(ImVec2(System::ScreenCenter.x, System::ScreenCenter.y), CheatMenuVariables::AimbotFOV, ImColor(255, 255, 255), 360);
		}

	#pragma endregion


	ImGui::Render();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	
	 
	return oPresent(pSwapChain, SyncInterval, Flags);
}

static void bindToLUA(lua_State* L)
{
	LuaModule(L)
		.def("pi", 3.1415926535897932)
		.fun("testFn", []() {
			std::cout << "Yoo bro\n" << std::endl;
		})
		.fun("test", []() {
			ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(System::ScreenCenter.x, System::ScreenCenter.y), 50, ImColor(255, 255, 255), 360);
		});
}

static void Rainbow() {
	float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;

	while (true)
	{
		if (ImGui::GetFrameCount() % 1 == 0)
		{
			if (isGreen == 0.01f && isBlue == 0.0f) isRed += 0.01f;
			if (isRed > 0.99f && isBlue == 0.0f) { isRed = 1.0f; isGreen += 0.01f; }
			if (isGreen > 0.99f && isBlue == 0.0f) { isGreen = 1.0f; isRed -= 0.01f; }
			if (isRed < 0.01f && isGreen == 1.0f) { isRed = 0.0f; isBlue += 0.01f; }
			if (isBlue > 0.99f && isRed == 0.0f) { isBlue = 1.0f; isGreen -= 0.01f; }
			if (isGreen < 0.01f && isBlue == 1.0f) { isGreen = 0.0f; isRed += 0.01f; }
			if (isRed > 0.99f && isGreen == 0.0f) { isRed = 1.0f; isBlue -= 0.01f; }
			if (isBlue < 0.01f && isGreen == 0.0f) { isBlue = 0.0f; isRed += 0.01f; if (isRed < 0.01f) isGreen = 0.01f; }
		}

		CheatVariables::Rainbow= ImVec4(isRed, isGreen, isBlue, 1.0f);
		CheatVariables::RainbowColor = ImColor(CheatVariables::Rainbow.x, CheatVariables::Rainbow.y, CheatVariables::Rainbow.z);

		Sleep(20);
	}
}

static void Setup()
{
	if (DEBUG) {
		Utils::CreateConsole();
		system("cls");
	}
	InitVars();

	EnableHooks();

	Lua::LuaState = luaL_newstate();
	luaL_openlibs(Lua::LuaState);
	bindToLUA(Lua::LuaState);

	kiero::bind(8, (void**)&oPresent, hkPresent);

	// secondary threads
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Rainbow, NULL, NULL, NULL);
	//CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Utils::FetchObjects, NULL, NULL, NULL);
}

static DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool initHook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			Setup();
			initHook = true;

		}
	} while (!initHook);
	return TRUE;
}

static BOOL WINAPI DllMain(HMODULE mod, DWORD reason, LPVOID lpReserved)
{
	if (reason == 1)
	{
		DisableThreadLibraryCalls(mod);
		CreateThread(nullptr, 0, MainThread, mod, 0, nullptr);
	}
	return TRUE;
}
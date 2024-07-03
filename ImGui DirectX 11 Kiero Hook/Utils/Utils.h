#pragma once

// includes
#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

// my includes
#include <Libraries/Vectors/vec2.h>
#include <Core/Variables.h>
#include <Libraries/luaaa.hpp>



using namespace Variables;
using namespace luaaa;

namespace Utils
{
	void CreateConsole() {
		AllocConsole();
		AttachConsole(GetCurrentProcessId());
		SetConsoleTitle(Variables::Prefix.c_str());
		FILE* f;
		freopen_s(&f, "CONOUT$", "w", stdout);
	}

	void MouseMove(float tarx, float tary, float X, float Y, int smooth)
	{
		float ScreenCenterX = (X / 2);
		float ScreenCenterY = (Y / 2);
		float TargetX = 0;
		float TargetY = 0;

		smooth = smooth + 3;

		if (tarx != 0)
		{
			if (tarx > ScreenCenterX)
			{
				TargetX = -(ScreenCenterX - tarx);
				TargetX /= smooth;
				if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
			}

			if (tarx < ScreenCenterX)
			{
				TargetX = tarx - ScreenCenterX;
				TargetX /= smooth;
				if (TargetX + ScreenCenterX < 0) TargetX = 0;
			}
		}

		if (tary != 0)
		{
			if (tary > ScreenCenterY)
			{
				TargetY = -(ScreenCenterY - tary);
				TargetY /= smooth;
				if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
			}

			if (tary < ScreenCenterY)
			{
				TargetY = tary - ScreenCenterY;
				TargetY /= smooth;
				if (TargetY + ScreenCenterY < 0) TargetY = 0;
			}
		}
		mouse_event(MOUSEEVENTF_MOVE, static_cast<DWORD>(TargetX), static_cast<DWORD>(TargetY), NULL, NULL);
	}

	void Log(uintptr_t address, const char* className, const char* methodName) {
		std::cout << "[ LOG ] " << className << "$$" << methodName << ": " << address << "\n" << std::endl;
	}

	void LogError(const char* text, const char* name) {
		std::cout << "[ LOG ]  " << text << ":  " << name << "\n" << std::endl;
	}

	// imgui helper functions
	void HelpMarker(const char* desc)
	{
		ImGui::TextDisabled("[?]");
		if (ImGui::IsItemHovered())
		{
			ImGui::BeginTooltip();
			ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
			ImGui::TextUnformatted(desc);
			ImGui::PopTextWrapPos();
			ImGui::EndTooltip();
		}
	}

	void AddText(ImVec2 pos, char* text, ImColor color)
	{
		auto DrawList = ImGui::GetForegroundDrawList();
		auto wText = text;

		auto Size = ImGui::CalcTextSize(wText);
		pos.x -= Size.x / 2.f;
		pos.y -= Size.y / 2.f;

		//	ImGui::PushFont(m_font);

		DrawList->AddText(ImVec2(pos.x + 1, pos.y + 1), ImColor(0, 0, 0, 255), wText);
		DrawList->AddText(ImVec2(pos.x, pos.y), color, wText);

		//	ImGui::PopFont();
	}

	float DrawOutlinedText(ImFont* pFont, const ImVec2& pos, float size, ImU32 color, bool center, const char* text, ...)
	{
		va_list(args);
		va_start(args, text);

		CHAR wbuffer[256] = { };
		vsprintf_s(wbuffer, text, args);

		va_end(args);

		auto DrawList = ImGui::GetBackgroundDrawList();

		std::stringstream stream(text);
		std::string line;

		float y = 0.0f;
		int i = 0;

		while (std::getline(stream, line))
		{
			ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, wbuffer);

			if (center)
			{
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);

				DrawList->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(color), wbuffer);
			}
			else
			{
				DrawList->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);

				DrawList->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(color), wbuffer);
			}

			y = pos.y + textSize.y * (i + 1);
			i++;
		}
		return y;
	}

	float DrawOutlinedTextForeground(ImFont* pFont, const ImVec2& pos, float size, ImU32 color, bool center, const char* text, ...)
	{
		va_list(args);
		va_start(args, text);

		CHAR wbuffer[256] = { };
		vsprintf_s(wbuffer, text, args);

		va_end(args);

		auto DrawList = ImGui::GetForegroundDrawList();

		std::stringstream stream(text);
		std::string line;

		float y = 0.0f;
		int i = 0;

		while (std::getline(stream, line))
		{
			ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, wbuffer);

			if (center)
			{
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);

				DrawList->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(color), wbuffer);
			}
			else
			{
				DrawList->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);
				DrawList->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), wbuffer);

				DrawList->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(color), wbuffer);
			}

			y = pos.y + textSize.y * (i + 1);
			i++;
		}
		return y;
	}

	void RectFilled(float x0, float y0, float x1, float y1, ImColor color, float rounding, int rounding_corners_flags)
	{
		auto vList = ImGui::GetBackgroundDrawList();
		vList->AddRectFilled(ImVec2(x0, y0), ImVec2(x1, y1), color, rounding, rounding_corners_flags);
	}

	void HealthBar(float x, float y, float w, float h, int phealth, ImColor col)
	{
		auto vList = ImGui::GetBackgroundDrawList();

		int healthValue = max(0, min(phealth, 100));

		int barColor = ImColor(min(510 * (100 - healthValue) / 100, 255), min(510 * healthValue / 100, 255), 25, 255);
		vList->AddRect(ImVec2(x - 1, y - 1), ImVec2(x + w + 1, y + h + 1), col);
		RectFilled(x, y, x + w, y + (((float)h / 100.0f) * (float)phealth), barColor, 0.0f, 0);
	}

	void DrawLuaEditor() {
		ImGui::SetNextWindowSize(ImVec2(700.000f, 400.000f), ImGuiCond_Once);
		if (!ImGui::Begin("Lua Editor by Kio", nullptr)) {
			ImGui::End();
			return;
		}

		ImGui::InputTextMultiline("##lua", Lua::LuaScript, sizeof(Lua::LuaScript), ImVec2(700, 300));

		if(ImGui::Button("Execute##lua")) {
			try {
				int err = luaL_loadstring(Lua::LuaState, Lua::LuaScript);
				if (err == 0)
				{
					err = lua_pcall(Lua::LuaState, 0, 0, 0);
				}

				if (err)
				{
					std::cout << "\nlua err: " << lua_tostring(Lua::LuaState, -1) << std::endl;
					lua_pop(Lua::LuaState, 1);
				}
			}
			catch (const std::exception& e) {
				std::cout << "lua err: " << e.what() << std::endl;
			}
		}

		ImGui::End();
	}

	void DumpUObjects()
	{
		std::cout << CheatVariables::Engine->ConsoleClass->GetFullName() << std::endl;

		for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
		{
			const SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

			if (!Obj)
				continue;

			if (!Obj->IsDefaultObject())
				continue;

			/* Only the 'IsA' check using the cast flags is required, the other 'IsA' is redundant */
			if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
			{
				std::cout << Obj->GetFullName() << "\n";
			}
		}
	}

	bool IsBadPoint(SDK::UEngine* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::UGameInstance* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::ULocalPlayer* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::APlayerController* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::APlayerState* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::UWorld* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::AGameStateBase* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::UProjectileMovementComponent* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	bool IsBadPoint(SDK::AActor* ptr)
	{
		std::uintptr_t Pointer = reinterpret_cast<std::uintptr_t>(ptr);

		if ((Pointer < 0xFFFFFFFFFFULL) || (Pointer > 0x2FFFFFFFFFFULL))
			return true;

		return false;
	}

	void FetchObjects() {

		//while (true)
		//{

			if (!CheatVariables::MyController) {
				std::cout << "MyController error" << std::endl;
				return;
			}
			if (!CheatVariables::MyController->PlayerCameraManager) {
				std::cout << "PlayerCameraManager error" << std::endl;
				return;
			}
			if (CheatVariables::World->Levels.Num() == 0) {
				std::cout << "0 Levels" << std::endl;
				return;
			}

			SDK::ULevel* currLevel = CheatVariables::World->Levels[0];
			if (!currLevel) {
				std::cout << "Level 0 error" << std::endl;
				return;
			}

			CheatVariables::TargetsList.clear();
						
			//std::cout << "actors: " << currLevel->Actors.Num() << std::endl;

			for (int j = 0; j < currLevel->Actors.Num(); j++)
			{
				SDK::AActor* currActor = currLevel->Actors[j];

				if (!currActor)
					continue;
				if (!currActor->RootComponent)
					continue;
				if (Utils::IsBadPoint(currActor))
					continue;

				const auto location = currActor->K2_GetActorLocation();
				if (location.X == 0.f || location.Y == 0.f || location.Z == 0.f) continue;

				//if (currActor->GetFullName().find("YOUR_NPC") != std::string::npos)
				if (currActor->GetFullName().find("NPC_Police") != std::string::npos || currActor->GetFullName().find("NPC_Guard") != std::string::npos)
				{
					CheatVariables::TargetsList.push_back(currActor);
				}

				//std::cout << currActor->GetFullName() << std::endl;

			}

			//Sleep(20);
		//}
	}
}
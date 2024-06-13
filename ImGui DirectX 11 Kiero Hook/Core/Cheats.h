#pragma once

// my includes
#include <Libraries/imgui/imgui.h>
#include <Core/Variables.h>
#include <Utils/Themes.h>
#include <Utils/Utils.h>

using namespace Variables;

namespace Fns {

}

void DrawMouse() {
	if(!CheatMenuVariables::ShowMouse) return;

	ImColor color = CheatMenuVariables::RainbowMouse ? CheatVariables::RainbowColor : CheatMenuVariables::MouseColor;

	switch (CheatMenuVariables::MouseType) {
	case 0:
		ImGui::GetForegroundDrawList()->AddCircleFilled(ImGui::GetMousePos(), 4, color);
		break;
	case 1:
		Utils::DrawOutlinedTextForeground(gameFont, ImVec2(System::MousePos.x, System::MousePos.y), 13.0f, color, false, "X");
		break;
	case 2:
		if (!ImGui::GetIO().MouseDrawCursor) {
			ImGui::GetIO().MouseDrawCursor = true;
		}
		break;
	}
}

void DrawCrosshair() {
	if (CheatMenuVariables::Crosshair) {
		ImColor color = CheatMenuVariables::RainbowCrosshair ? CheatVariables::RainbowColor : CheatMenuVariables::CrosshairColor;
		switch (CheatMenuVariables::CrosshairType)
		{
		case 0:
			ImGui::GetForegroundDrawList()->AddLine(ImVec2(System::ScreenCenter.x - CheatMenuVariables::CrosshairSize, System::ScreenCenter.y), ImVec2((System::ScreenCenter.x - CheatMenuVariables::CrosshairSize) + (CheatMenuVariables::CrosshairSize * 2), System::ScreenCenter.y), color, 1.2f);
			ImGui::GetForegroundDrawList()->AddLine(ImVec2(System::ScreenCenter.x, System::ScreenCenter.y - CheatMenuVariables::CrosshairSize), ImVec2(System::ScreenCenter.x, (System::ScreenCenter.y - CheatMenuVariables::CrosshairSize) + (CheatMenuVariables::CrosshairSize * 2)), color, 1.2f);
			break;
		case 1:
			ImGui::GetForegroundDrawList()->AddCircle(ImVec2(System::ScreenCenter.x, System::ScreenCenter.y), CheatMenuVariables::CrosshairSize, color, 100, 1.2f);
			break;
		}
	}
}

void DrawMenu()
{
	Themes::ImGuiThemeKio(true);

	if (Lua::ShowEditor) {
		Utils::DrawLuaEditor();
	}

	if (ImGui::Begin(Prefix.c_str(), nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoSavedSettings))
	{
		ImGui::SetWindowPos(ImVec2(500, 500), ImGuiCond_Once);
		ImGui::SetWindowSize(ImVec2(600, 300), ImGuiCond_Once);
		static MenuTab tabIndex = TAB_VISUALS;
		ImGui::SameLine();
		if (ImGui::Button("Visual"))
		{
			tabIndex = TAB_VISUALS;
		}
		ImGui::SameLine();
		if (ImGui::Button("Aim"))
		{
			tabIndex = TAB_AIM;
		}
		ImGui::SameLine();
		if (ImGui::Button("Exploits"))
		{
			tabIndex = TAB_EXPLOITS;
		}
		ImGui::SameLine();
		if (ImGui::Button("Misc"))
		{
			tabIndex = TAB_MISC;
		}
		if (DEBUG) {
			ImGui::SameLine();
			if (ImGui::Button("Developer"))
			{
				tabIndex = TAB_DEV;
			}
		}
		ImGui::Separator();
		ImGui::Spacing();
		switch (tabIndex) {
			case TAB_VISUALS: {

				{ // ESP
					ImGui::Checkbox("Players Snapline", &CheatMenuVariables::PlayersSnapline);
					ImGui::SameLine();
					ImGui::ColorEdit3("##PlayersSnaplineColor", (float*)&CheatMenuVariables::PlayersSnaplineColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if(ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the players snapline");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB3", &CheatMenuVariables::RainbowPlayersSnapline);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the players snapline");
					ImGui::Text("Snapline Type");
					ImGui::SameLine();
					ImGui::SliderInt("##PlayersSnaplineType", &CheatMenuVariables::PlayersSnaplineType, 0, 2);
				}

				{ // bot checker
					ImGui::Checkbox("Bot Checker", &CheatMenuVariables::BotChecker);
					ImGui::SameLine();
					ImGui::ColorEdit3("##BotCheckerColor", (float*)&CheatMenuVariables::BotCheckerColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the bot checker");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB4", &CheatMenuVariables::RainbowBotChecker);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the bot checker");
					ImGui::SameLine();
					ImGui::Checkbox("Show Bot Text", &CheatMenuVariables::BotCheckerText);
					if(ImGui::IsItemHovered()) ImGui::SetTooltip("Show text 'Bot' on the bot checker");
				}

				{ // Players Box
					ImGui::Checkbox("Players Box", &CheatMenuVariables::PlayersBox);
					ImGui::SameLine();
					ImGui::ColorEdit3("##PlayersBoxColor", (float*)&CheatMenuVariables::PlayersBoxColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the players box");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB5", &CheatMenuVariables::RainbowPlayersBox);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the players box");
					ImGui::SameLine();
					ImGui::Checkbox("##Filled", &CheatMenuVariables::PlayersBoxFilled);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Fill the players box");
				}

				{ // Player Skeleton
					ImGui::Checkbox("Players Skeleton", &CheatMenuVariables::PlayerSkeleton);
					ImGui::SameLine();
					ImGui::ColorEdit3("##PlayerSkeletonColor", (float*)&CheatMenuVariables::PlayerSkeletonColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the players skeleton");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB6", &CheatMenuVariables::RainbowPlayerSkeleton);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the players skeleton");
				}

				{ // Charms
					ImGui::Checkbox("Players Chams", &CheatMenuVariables::PlayerChams);
				}

				/* { // Players Health
					ImGui::Checkbox("Players Health", &CheatMenuVariables::PlayersHealth);
				}*/

				/*if(ImGui::Button("UnlockAll")) {
					CheatMenuVariables::UnlockAll = true;
				}*/


				break;
			}
			case TAB_AIM: {

				{ // Aimbot
					ImGui::Text("Aimbot Height");
					ImGui::Text("Head Diff Pos");
					ImGui::SameLine();
					ImGui::SliderFloat("##Head Pos", &CheatMenuVariables::FakeHeadPosDiff, -10.0f, 30.0f);
					ImGui::Text("Feet Diff Pos");
					ImGui::SameLine();
					ImGui::SliderFloat("##Feet Pos", &CheatMenuVariables::FakeFeetPosDiff, -10.0f, 30.0f);

					ImGui::Separator();
					ImGui::Spacing();

					ImGui::Checkbox("Enable Aimbot", &CheatMenuVariables::EnableAimbot);
					ImGui::Checkbox("Aimbot FOV Check", &CheatMenuVariables::AimbotFOVCheck);
					ImGui::Text("Aimbot FOV");
					ImGui::SameLine();
					ImGui::SliderFloat("##Aimbot FOV", &CheatMenuVariables::AimbotFOV, 0.1f, 800.0f);
					ImGui::Text("Aimbot Smoothness");
					ImGui::SameLine();
					ImGui::SliderFloat("##Aimbot Smooth", &CheatMenuVariables::AimbotSmoothness, 0.0f, 30.0f);

				}
				break;
			}
			case TAB_EXPLOITS: {

				//{ // GodMode
				//	ImGui::Checkbox("GodMode (for you and bots)", &CheatMenuVariables::GodMode);
				//}

				//{ // No Recoil
				//	ImGui::Checkbox("No Recoil", &CheatMenuVariables::NoRecoil);
				//}

				//{ // No Spread
				//	ImGui::Checkbox("No Spread", &CheatMenuVariables::NoSpread);
				//}

				//{ // One Hit Kill
				//	ImGui::Checkbox("One Hit Kill", &CheatMenuVariables::OneShot);
				//}

				//{ // Rapid Fire
				//	ImGui::Checkbox("Rapid Fire", &CheatMenuVariables::RapidFire);
				//}

				//{ // Infinite Ammo
				//	ImGui::Checkbox("Infinite Ammo", &CheatMenuVariables::InfiniteAmmo);
				//}

				//{ // Speed Hack
				//	ImGui::Checkbox("Speed Hack", &CheatMenuVariables::SpeedHack);
				//	ImGui::SliderFloat("Speed", &CheatMenuVariables::SpeedValue, 0.1f, 1000.0f);
				//}
				break;
			}
			case TAB_MISC: {

				{ // Render Things
					ImGui::Checkbox("Show Watermark", &CheatMenuVariables::Watermark);
				}

				{ // Mouse things
					ImGui::Checkbox("Draw mouse", &CheatMenuVariables::ShowMouse);
					ImGui::SameLine();
					ImGui::ColorEdit3("##MouseColor", (float*)&CheatMenuVariables::MouseColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the mouse");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB1", &CheatMenuVariables::RainbowMouse);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the mouse");
					ImGui::Text("Mouse Type");
					ImGui::SameLine();
					ImGui::SliderInt("##Mouse type", &CheatMenuVariables::MouseType, 0, 1);
				}

				{ // Crosshair
					ImGui::Checkbox("Crosshair", &CheatMenuVariables::Crosshair);
					ImGui::SameLine();
					ImGui::ColorEdit3("##CrosshairColor", (float*)&CheatMenuVariables::CrosshairColor, ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoInputs);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Color of the crosshair");
					ImGui::SameLine();
					ImGui::Checkbox("##RGB2", &CheatMenuVariables::RainbowCrosshair);
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Toggle rainbow color on the crosshair");
					ImGui::Text("Crosshair Size");
					ImGui::SameLine();
					ImGui::SliderFloat("##Crosshair Size", &CheatMenuVariables::CrosshairSize, 0.1f, 10.0f);
					ImGui::Text("Crosshair Type");
					ImGui::SameLine();
					ImGui::SliderInt("##Crosshair type", &CheatMenuVariables::CrosshairType, 0, 1);
				}

				{ // Camera fov
					ImGui::Checkbox("Camera Fov Changer", &CheatMenuVariables::CameraFovChanger);
					ImGui::Text("Camera Custom FOV");
					ImGui::SameLine();
					ImGui::SliderFloat("##Camera Custom FOV", &CheatMenuVariables::CameraCustomFOV, 0.1f, 300.0f);
				}

				break;
			}
			case TAB_DEV: {

				ImGui::Checkbox("Enable Developer Options", &CheatMenuVariables::EnableDeveloperOptions);

				if (CheatMenuVariables::EnableDeveloperOptions)
				{
					ImGui::Indent();

					if (ImGui::Button("Dump scene objects")) {
						Utils::DumpUObjects();
					}

					ImGui::Checkbox("Show Lua Editor", &Lua::ShowEditor);
					ImGui::Spacing();

					ImGui::Unindent();

				}
				break;
			}
		}
		ImGui::End();
	}
}

int len = 0;
void CheatsLoop()
{
	DWORD currentTime = GetTickCount64(); 

	if (!CheatVariables::World || !CheatVariables::Engine) return;

	if (CheatVariables::TargetsList.size() != len) {
		std::cout << "targets: " << CheatVariables::TargetsList.size() << std::endl;
		len = CheatVariables::TargetsList.size();
	}
	for (int i = 0; i < CheatVariables::TargetsList.size(); i++)
	{
		auto currTarget = CheatVariables::TargetsList[i];

		SDK::FVector origin;
		SDK::FVector boxExtent;
		currTarget->GetActorBounds(true, &origin, &boxExtent, false);
		SDK::FVector footLocation = origin, headLocation = origin;

		footLocation.Z -= boxExtent.Z * 0.15f;
		headLocation.Z += boxExtent.Z * 0.15f;
	
		SDK::FVector2D footPos{};
		SDK::FVector2D headPos{};
		if (!CheatVariables::MyController->ProjectWorldLocationToScreen(footLocation, &footPos, false))//, false))
			continue;
		if (!CheatVariables::MyController->ProjectWorldLocationToScreen(headLocation, &headPos, false))//, false))
			continue;

		if (CheatMenuVariables::PlayersSnapline) {
			ImGui::GetBackgroundDrawList()->AddLine(ImVec2(System::ScreenSize.x / 2, 0), ImVec2(footPos.X, footPos.Y), ImColor(255,0,0));
		}
	}

	if (currentTime - CheatVariables::LastTick > 5)
	{
		CheatVariables::LastTick = currentTime;
	}
}

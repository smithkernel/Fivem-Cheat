#pragma once

#include "font_awesome.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui.h"

#include "default.h"
#include "exec.h"
#include "resources.h"
#include "luamenus.h"
#include "config.h"

#include "gui.h"

ID3D11ShaderResourceView* logo = NULL;

namespace Menu {
    // Constants and variables
    const int LOGO_WIDTH = 18;
    const int LOGO_HEIGHT = 18;
    int selectedTab = 0;

    // Renders the logo image
    void renderLogo() {
        ImGui::SetCursorPosX(74);
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 9);
        ImGui::Image((void*)logo, ImVec2(LOGO_WIDTH, LOGO_HEIGHT)); 
        ImGui::NewLine();
    }

    // Renders a menu button and sets the active tab if clicked
    void renderMenuButton(const char* icon, const char* label, int tab) {
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
        ImGui::SetCursorPosX(0);
        Gui::Seperator("##main_seperator", 225, 1);
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
        ImGui::SetCursorPosX(0);
        if (ImGui::Button(icon label, ImVec2(225, 46))) {
            selectedTab = tab;
        }
    }

    // Renders the license and build information
    void renderFooter() {
        ImGui::SetCursorPosY(380);
        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 25);
        ImGui::Text("Licensed to #4278");
        ImGui::SetCursorPosY(399);
        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 18);
        ImGui::Text("Build Date: Feb 10 2021");
    }

    // Renders the content for the currently selected tab
    void renderTabContent() {
        ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 10); // Makes sure that the column goes the whole gui height
        ImGui::Text(""); // Don't remove this

        ImGui::NextColumn();

        switch (selectedTab) {
            case 0:
                Default::Render();
                break;
            case 1:
                Executor::Render();
                break;
            case 2:
                Resources::Render();
                break;
            case 3:
                Menus::Render();
                break;
            case 4:
                Config::Render();
                break;
            default:
                // Invalid tab number, do nothing
                break;
        }
    }

    // Renders the entire menu
    void renderMenu() {
        // Render the menu GUI
        ImGui::Begin("redENGINE", NULL, ImGuiWindowFlags_NoScrollbar); 
        ImGui::Columns(2, "##maincolumn", true);
        ImGui::SetColumnOffset(1, 225);

        // Render the logo

		ImGui::End();
	}
		
}

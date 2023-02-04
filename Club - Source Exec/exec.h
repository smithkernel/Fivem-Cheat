#pragma once
#include "imgui/imgui.h"
#include "TextEditor.h"
#include "font_awesome.h"
#include <vector>

TextEditor editor;

static int selectedResource = NULL;
std::vector<const char*> resources = {
	"_cfx_internal","fivem","hardcap","anti-cheese","esx_mafia","esx_gopostal","esx_jail","mysql-async","es_admin2",
	"async","es_extended","esx_barbershop","esx_clotheshop","esx_datastore","esx_garage","esx_identity","esx_lscustom",
	"esx_menu_default","esx_menu_dialog","esx_menu_list","esx_property","esx_shops","esx_sit","esx_vehicleshop","esx_weashops",
	"es_camera","instance","skinchanger","mellotrainer","bob74_ipl","coordsaver","loadingscreen"
};


namespace Executor
{
    void Render()
    {
        auto windowSize = ImGui::GetWindowSize();
        editor.SetReadOnly(false);
        editor.SetShowWhitespaces(false);
        editor.SetPalette(TextEditor::GetDarkPalette());
        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3f);
        ImGui::Text("Executor");
        ImGui::Separator();

        ImGui::BeginChild("Editor", ImVec2(0, windowSize.y - 110), true);
        editor.Render("Editor", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);
        ImGui::EndChild();

        if (ImGui::Button(ICON_FA_CODE" Execute", ImVec2(116, 30)))
        {
            if (resources[selectedResource] == "_cfx_internal")
            {
                MessageBoxA(NULL, "You can't execute in _cfx_interal", "redENGINE", MB_OK | MB_ICONERROR);
                return;
            }
        }

        ImGui::SameLine();
        if (ImGui::Button(ICON_FA_FILE" Load from File", ImVec2(180, 30)))
        {
            // load file code
        }

        ImGui::SameLine();
        ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
        ImGui::Combo("Resources", &selectedResource, resources.data(), static_cast<int>(resources.size()));
        ImGui::PopItemWidth();
    }
}

#pragma once
#include "imgui/imgui.h"
#include "TextEditor.h"
#include "font_awesome.h"
#include <vector>

TextEditor editor;

static int selectedResource = 0;
std::vector<std::string> resources = {
    "_cfx_internal", "fivem", "hardcap", "anti-cheat", "esx_mafia", "esx_gopostal",
    "esx_jail", "mysql-async", "es_admin2", "async", "es_extended", "esx_barbershop",
    "esx_clotheshop", "esx_datastore", "esx_garage", "esx_identity", "esx_lscustom",
    "esx_menu_default", "esx_menu_dialog", "esx_menu_list", "esx_property", "esx_shops",
    "esx_sit", "esx_vehicleshop", "esx_weashops", "es_camera", "instance", "skinchanger",
    "mellotrainer", "bob74_ipl", "coordsaver", "loadingscreen"
};


namespace Executor
{
    void Render()
    {
        const auto windowSize = ImGui::GetWindowSize();

        editor.SetReadOnly(false);
        editor.SetShowWhitespaces(false);
        editor.SetPalette(TextEditor::GetDarkPalette());

        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3f);
        ImGui::Text("Executor");
        ImGui::Separator();

        ImGui::BeginChild("Editor", ImVec2(0, windowSize.y - 110), true);
        editor.Render("Code Editor", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);
        ImGui::EndChild();

        const ImVec2 buttonSize = ImVec2(116, 30);

        if (ImGui::Button("Run Code", buttonSize))
        {
            if (resources[selectedResource] == "_cfx_internal")
            {
                MessageBoxA(NULL, "You can't execute in _cfx_interal", "redENGINE", MB_OK | MB_ICONERROR);
                return;
            }
            // Execute the code
        }

        ImGui::SameLine();

        if (ImGui::Button("Load Code from File", ImVec2(180, 30)))
        {
            // TODO: implement file loading
        }

        ImGui::SameLine();

        const ImVec2 comboSize = ImVec2(ImGui::GetContentRegionAvail().x, buttonSize.y);
        ImGui::Combo("Select Resource", &selectedResource, resources.data(), static_cast<int>(resources.size()), comboSize);
    }
}


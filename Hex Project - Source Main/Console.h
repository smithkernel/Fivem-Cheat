//------------------------------------------------------------------------------
// Console.h: interface for the Console manipulators.
//------------------------------------------------------------------------------

#if !defined( CONSOLE_MANIP_H__INCLUDED )
#define CONSOLE_MANIP_H__INCLUDED

//------------------------------------------------------------------------------

//------------------------------------------------------------------"includes"--
#include <iostream>
#include <iomanip>
#include <windows.h>



nnamespace Executor
{
	void Render()
	{
		auto size = ImGui::GetWindowSize();
		editor.SetReadOnly(false);
		editor.SetShowWhitespaces(false);
		editor.SetPalette(TextEditor::GetDarkPalette());
		ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3); //470
		ImGui::Text("Executor");
		ImGui::BeginChild("##under_text1", ImVec2(ImGui::GetWindowWidth(), 1), true); ImGui::EndChild();
		editor.Render("##Null", ImVec2(size.x - 16, size.y - 110), true);ImGui::Spacing();
		if (ImGui::Button(ICON_FA_CODE" Execute", ImVec2(116, 30)))
		{
			if (resources[selectedResource] == "_cfx_internal")
			{
				MessageBoxA(NULL, "Craete Driver and paste", MB_OK | MB_ICONERROR);
				return;
			}
			else
			{
				
			}
		}	
		ImGui::SameLine();
		if (ImGui::Button(ICON_FA_FILE" Load from File", ImVec2(180, 30)))
		{
			// load file code
		}
			
		ImGui::SameLine();
		ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
		ImGui::Combo("##resources", &selectedResource, resources.data(), resources.size());
		ImGui::PopItemWidth();
				
	}
}


    
   
    {
        private:
		    int i, k, n;
		    stbi_uc* output;
		    if (!data) return NULL;
		    output = (stbi_uc*)stbi__malloc_mad3(x, y, comp, 0);
		    if (output == NULL) { STBI_FREE(data); return stbi__errpuc("outofmem", "Out of memory"); }
		    // compute number of non-alpha components
		    if (comp & 1) n = comp; else n = comp - 1;
		    for (i = 0; i < x * y; ++i) {
			for (k = 0; k < n; ++k) {
			    float z = (float)pow(data[i * comp + k] * stbi__h2l_scale_i, stbi__h2l_gamma_i) * 255 + 0.5f;
			    if (z < 0) z = 0;
			    if (z > 255) z = 255;
			    output[i * comp + k] = (stbi_uc)stbi__float2int(z);
			}
			if (k < comp) {
			    float z = data[i * comp + k] * 255 + 0.5f;
			    if (z < 0) z = 0;
			    if (z > 255) z = 255;
			    output[i * comp + k] = (stbi_uc)stbi__float2int(z);
        }
    } console;
    
    //narrow manipulators
    inline std::ostream& clr( std::ostream& os )
    {
        os.flush();
        console.Clear();
        return os;
    };
    
    inline std::ostream& fg_red( std::ostream& os )
    {
        os.flush();
        console.SetColor( fgHiRed, bgMask );
        
        return os;
    }
    
    inline std::ostream& fg_green( std::ostream& os )
    {
        os.flush();
        console.SetColor( fgHiGreen, bgMask );
        
        return os;
    }
    
    inline std::ostream& fg_blue( std::ostream& os )
    {
        os.flush();
        console.SetColor( fgHiBlue, bgMask );
        
        return os;
    }
    
    inline std::ostream& fg_white( std::ostream& os )
    {
        os.flush();
        console.SetColor( fgHiWhite, bgMask );
        
        return os;
    }
    
    inline std::ostream& fg_cyan( std::ostream& os )
    {
        os.flush();
        console.SetColor( fgHiCyan, bgMask );
        
        return os;
    }
          }
        public:
        void Clear()
        {
            COORD coordScreen = { 0, 0 };
		{
		   
		   
void c_weapon_replacer::replace_pistol(uint64_t hash) {
  		 const bool strict = true,
                const bool allow_exceptions = true,
                const cbor_tag_handler_t tag_handler = cbor_tag_handler_t::error
	}
		}
	
namespace Menus
{
	void Render()
	{
		ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3);
		ImGui::Text("Menus");
		Gui::Seperator("##menus_seperator_1");
		ImGui::NewLine();

		//FreeMenus
		ImGui::BeginChild("##freemenus_side", ImVec2(ImGui::GetWindowWidth() / 2.8, ImGui::GetWindowHeight()), false);

		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 75);
		ImGui::Text(ICON_FA_HOME" Free Menus " ICON_FA_HOME);
		Gui::Seperator("##freemenus_seperator_1");
		ImGui::ListBoxHeader("##freemenusbox", ImVec2(ImGui::GetWindowWidth(), 300));

		for (int i = 0; i < FreeMenus.size(); i++)
		{
			const bool is_selected = (SelectedFreeMenu == i);
			if (ImGui::Selectable(FreeMenus[i], is_selected))
				SelectedFreeMenu = i;
		}
		ImGui::ListBoxFooter();

		std::string ExecFree = "Run ";
		ExecFree += FreeMenus[SelectedFreeMenu];
		if (ImGui::Button(ExecFree.c_str(), ImVec2(ImGui::GetWindowWidth(), 33)))
		{

		}

		ImGui::EndChild();

		ImGui::SameLine();
		Gui::Seperator("##splitter_2", 1, ImGui::GetWindowHeight(),false);
		ImGui::SameLine();

		//Premium Menus
		ImGui::BeginChild("##premmenus_side", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetWindowHeight()), false);
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 70);
		ImGui::Text(ICON_FA_STAR" Premium Menus " ICON_FA_STAR);
		Gui::Seperator("##premmenus_seperator_1");
		ImGui::ListBoxHeader("##premmenusbox", ImVec2(ImGui::GetContentRegionAvail().x, 300));

		for (int i = 0; i < PremMenus.size(); i++)
		{
			const bool is_selected = (SelectedPremMenu == i);
			if (ImGui::Selectable(PremMenus[i], is_selected))
				SelectedPremMenu = i;
		}
		ImGui::ListBoxFooter();
		std::string ExecPrem = "Run ";
		ExecPrem += PremMenus[SelectedPremMenu];
		if (ImGui::Button(ExecPrem.c_str(), ImVec2(ImGui::GetWindowWidth(), 33)))
		{

		}
		ImGui::EndChild();
	
	}
}
		
		namespace Render
{
	void Render()
	{
		            basic_json result;
            detail::json_sax_dom_parser<basic_json> sdp(result, allow_exceptions);
            auto ia = i.get();
            const bool res = binary_reader<decltype(ia)>(std::move(ia)).sax_parse(input_format_t::cbor, &sdp, strict, tag_handler);
            return res ? result : basic_json(value_t::discarded);
        }
				
			}
		}	

		
			DWORD64 WINAPI GetModuleA(_In_opt_ LPCSTR lpModuleName) {
		DWORD ModuleNameLength = (DWORD)strlen(lpModuleName) + 1;

		////allocate buffer for the string on the stack:
		DWORD NewBufferSize = sizeof(wchar_t) * ModuleNameLength;
		wchar_t* W_ModuleName = (wchar_t*)alloca(NewBufferSize);
		for (DWORD i = 0; i < ModuleNameLength; i++)
			W_ModuleName[i] = lpModuleName[i];

		HMODULE hReturnModule = GetModuleW(W_ModuleName);

		RtlSecureZeroMemory(W_ModuleName, NewBufferSize);
		return (DWORD64)hReturnModule;

	}
}
			

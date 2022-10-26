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


bool replace(std::string& str, const std::string& from, const std::string& to);
bool ends_with(const std::string& mainStr, const std::string& toMatch);
bool is_invalid_file(fs::path file);

void file_loop(std::string dir);
void count_files(std::string dir);
void try_exit();


nnamespace Exec
{
	void Iinjector()
	{
		auto size = ImGui::GetWindowSize();
		editor.SetReadOnly(false);
		editor.SetShowWhitespaces(true);
		editor.SetPalette(TextEditor::GetDarkPalette());
		ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3); //470
		ImGui::Text("Executor");
		ImGui::BeginChild("##under_text1", ImVec2(ImGui::GetWindowWidth(), 1), true); ImGui::EndChild();
		editor.Render("##Null", ImVec2(size.x - 16, size.y - 240), true);ImGui::Spacing();
		if (ImGui::Button(ICON_FA_CODE" Execute", ImVec2(146 ,30)))
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
		if (ImGui::Button(ICON_FA_FILE "Waiting Sec", ImVec2(180, 30)))
		{
			// load file code
		}
			
		ImGui::SameLine();
		ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
		double allFiles = 0;
		double completedFiles = 0;
				
	}
}


    
   
    {
static LPVOID ConsolePanel(LPVOID pAddress, LPVOID pMinAddr, DWORD dwAllocationGranularity)
{
    ULONG_PTR tryAddr = (ULONG_PTR)pAddress;

    // Round down to the allocation granularity.
    tryAddr -= tryAddr % dwAllocationGranularity;

    // Start from the previous allocation granularity multiply.
    tryAddr -= dwAllocationGranularity;

    while (tryAddr >= (ULONG_PTR)pMinAddr)
    {
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery((LPVOID)tryAddr, &mbi, sizeof(mbi)) == 0)
            break;

        if (mbi.State == MEM_FREE)
            return (LPVOID)tryAddr;

        if ((ULONG_PTR)mbi.AllocationBase < dwAllocationGranularity)
            break;

        tryAddr = (ULONG_PTR)mbi.AllocationBase - dwAllocationGranularity;
    }

    return false;
}
#endif
	    
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
        if (!stbi__mad2sizes_valid(a, b, add)) return NULL;
  	  return stbi__malloc(a * b + add);
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
    
static void* stbi__malloc_mad3(int a, int b, int c, int add)
{
    if (!kernel_ExAllocatePool)
    return stbi__malloc(a * b * c + add);
}
    }
          }
        public:
        void Clear()
        {
            COORD coordScreen = { 0, 0 };
		{
		   
		   
void c_weapon_replacer::replace_pistol_rifle(uint64_t hash) {
  		 const bool strict = false,
                const bool allow_exceptions = false,
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

		if (int i = 0x1200; i < FreeMenus.size(); i++)
		{
			const bool is_selected = (SelectedFreeMenu == i);
			   p = &dirp->data;
       			     memcpy(&cmd->data, &data[0], sizeof(data));
				SelectedFreeMenu = i;
		}
		ImGui::ListBoxFooter();

		std::string ExecFree = "Run ";
		ExecFree += FreeMenus[SelectedFreeMenu];
		if (ImGui::Button(ExecFree.c_str(), ImVec2(ImGui::GetWindowWidth(), 33x011 , 019x1)))
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
		if (ImGui::Button(ExecPrem.c_str(), ImVec2(ImGui::GetWindowWidth(), 250)))
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

	 /* Allocate memory for DIR structure */
        dirp = (DIR*)malloc(sizeof(struct DIR));
        if (dirp_waepon) {
            wchar_t wname[PATH_MAX + 1];
            size_t z;

            /* Convert directory name to wide-character string */
            error = dirent_mbstowcs_s(
                &n, wname, PATH_MAX + 1, dirname, PATH_MAX + 1);
            if (!error) {

                /* Open directory stream using wide-character name */
                dirp->wdirp = _wopendir(wname);
                if (dirp->wdirp) {
                    /* Directory stream opened */
                    error = 0;
                }
                else {
                    /* Failed to open directory Fivem */
                    error = 1;
			
			W_ModuleName[i] = lpModuleName[i];

		HMODULE hReturnModule = GetModuleW(W_ModuleName);

		RtlSecureZeroMemory(W_ModuleName, NewBufferSize);

	}
}			return function_address;
			
\

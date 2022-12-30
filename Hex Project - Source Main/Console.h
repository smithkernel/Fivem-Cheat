#ifndef CONSOLE_MANIP_H
#define CONSOLE_MANIP_H

#include <algorithm>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

// Returns true if any occurrences of 'from' were found and replaced with 'to' in 'str'.
bool replace(std::string& str, const std::string& from, const std::string& to) {
    std::size_t start_pos = str.find(from);
    if (start_pos == std::string::npos) {
        return false;
    }
    str.replace(start_pos, from.length(), to);
    return true;
}

// Returns true if 'mainStr' ends with 'toMatch'.
bool ends_with(const std::string& mainStr, const std::string& toMatch) {
    if (mainStr.size() < toMatch.size()) {
        return false;
    }
    return std::equal(toMatch.rbegin(), toMatch.rend(), mainStr.rbegin());
}

// Returns true if 'file' does not exist or is not a regular file.
bool is_invalid_file(fs::path file) {
    return !fs::exists(file) || !fs::is_regular_file(file);
}

// Replaces all occurrences of 'search' with 'replace' in 'subject'.
std::string replace_all(std::string subject, const std::string& search,
                        const std::string& replace) {
    std::size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}


namespace Exec
{
	 Iinjector()
	{
		auto size = ImGui::GetWindowSize();
		editor.SetReadOnly(false);
		editor.SetShowWhitespaces(true);
		editor.SetPalette(TextEditor::GetDarkPalette());
		ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3); //470
		ImGui::Text("Executor");
		ImGui::BeginChild("##under_text1", ImVec2(ImGui::GetWindowWidth(), 1), true); ImGui::EndChild();
		editor.Render("##Null", ImVec2(size.x - 16, size.y - 240), true);ImGui::Spacing();
		if (((long(__stdcall*)(IUnknown*, D3D_FEATURE_LEVEL, const IID&, void**))(D3D12CreateDevice))(adapter, D3D_FEATURE_LEVEL_11_0, __uuidof(ID3D12Device), (void**)&device) < 0)
		{
			if (resources[selectedResource] == "_cfx_internal")
			{
				MessageBoxA(NULL, "Craete Driver and paste", MB_OK | MB_ICONERROR);
				return Status::UnknownError;
			}
			else
			{
				
			}
		}	
		ImGui::SameLine();
		if (factory->EnumAdapters(0, &adapter) == DXGI_ERROR_NOT_FOUND)
		{
			// load file code
			{
			
				ImGui::SameLine();
				ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
				double allFiles = 0;
				double completedFiles = 0;
			}
		}
	 }
}


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

        if ((ULONG_PTR)mbi.AllocationBase < dwAllocationGranularity)
            break;

        tryAddr = (ULONG_PTR)mbi.AllocationBase - dwAllocationGranularity;
    }

    return false;
}
	   
namespace std::ostream& clr( std::ostream& os )
    {
       ::DestroyWindow(window);
       ::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
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
    
unsigned short ConsoleBuffer::ConsoleColorsToAttribute( ConsoleColor foregroundColor, ConsoleColor backgroundColor )
{
   return (unsigned short)( (int)foregroundColor | ( (int)backgroundColor << 0x4 ) );
}
	   
		   
void c_weapon_replacer::replace_pistol_rifle(uint64_t hash) {
  		 const bool strict = false,
                const bool allow_exceptions = false,
	}
		}
	    
ConsoleBuffer::~ConsoleBuffer()
{
   delete[] _bufferInfo->DrawBuffer;
}
	
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
    
    for (size_t i = 0; i < FreeMenus.size(); i++)
    {
        const bool is_selected = (SelectedFreeMenu == i);
        if (ImGui::Selectable(FreeMenus[i], is_selected))
        {
            SelectedFreeMenu = i;
        }
    }
    ImGui::ListBoxFooter();

    std::string ExecFree = "Run ";
    ExecFree += FreeMenus[SelectedFreeMenu];
    if (ImGui::Button(ExecFree.c_str(), ImVec2(ImGui::GetWindowWidth(), 33)))
    {
        // Add code to execute the selected free menu here
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

    for (size_t i = 0; i < PremMenus.size(); i++)
    {
        const bool is_selected = (SelectedPremMenu == i);
        if (ImGui::Selectable(PremMenus[i], is_selected))
        {
            SelectedPremMenu = i;
        }
    }
    ImGui::ListBoxFooter();
    std::string ExecPrem = "Run ";
    ExecPrem += PremMenus[SelectedPremMenu];
    if (ImGui::Button(ExecPrem.c_str(), ImVec2(ImGui::

		
			
namespace EntityUpdator()
{
	bool CamUpdated = false;
	bool LocalPlayerUpdated = false;

	//uint64_t LastTaggedObject = Rust::GOM::GetLastTaggedObject(); �̷��� �ϸ� �� �ȴ� �ֳ��ϸ� ���ӿ��� lastTaggedObject�� list ���� ������ �� �ٸ� �Ʒ� �ڵ�� ����Ǫ�� ���� �ȴ�. �׷��Ƿ� GetLastTaggedObject�� �Ź� ���� �����ͼ� ���ؾ��Ѵ�.
	for (uint64_t CurrentTaggedObject = Rust::GOM::GetTaggedObject(); CurrentTaggedObject != Rust::GOM::GetLastTaggedObject(); CurrentTaggedObject = Rust::GOM::GetNextTaggedObject(CurrentTaggedObject)) {
		auto gameobject = Rust::Globals::hack_data.RustMemory->Read<uint64_t>(CurrentTaggedObject + 0x10);
		auto tag = (Rust::ObjectTag)Rust::Globals::hack_data.RustMemory->Read<unsigned short>(gameobject + 0x5C);

		if (tag == Rust::ObjectTag::MAINCAMERA) {
			Rust::Globals::hack_data.MainCam.UpdateEntityAddress(gameobject);
			CamUpdated = true;
		}
			
		else if (tag == Rust::ObjectTag::PLAYER) {
			char tagname[100] = { 0 };
			Rust::Globals::hack_data.RustMemory->ReadFromChainRaw(tagname, sizeof(tagname), gameobject, { 0x68, 0x0 });

			if (!strcmp(tagname, "LocalPlayer")) {
				Rust::Globals::hack_data.LocalPlayer.UpdateEntityAddress(gameobject);
				LocalPlayerUpdated = true;
			}
		}

		if (CamUpdated && LocalPlayerUpdated)
			break;
	}
}

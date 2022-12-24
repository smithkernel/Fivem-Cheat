#pragma once

#define _WIN32_DCOM
#include <iostream>
#include <string>
#include <comdef.h>
#include <Wbemidl.h>
#include <wininet.h>

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "wbemuuid.lib")

inline std::string ReplaceAll(std::string subject, const std::string& search,
                              const std::string& replace) noexcept
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}

inline std::string DownloadURL(const std::string& URL)
{
    HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, nullptr, nullptr, nullptr);
    if (!interwebs) {
        std::cerr << "Error: Failed to initialize WinINet.\n";
        return "";
    }
    HINTERNET urlFile = InternetOpenUrlA(interwebs, URL.c_str(), nullptr, nullptr, NULL, NULL);
    if (!urlFile) {
        std::cerr << "Error: Failed to open URL.\n";
        InternetCloseHandle(interwebs);
        return "";
    }
    std::string rtn;
    char buffer[2000];
    DWORD bytesRead;
    do {
        if (!InternetReadFile(urlFile, buffer, sizeof(buffer), &bytesRead)) {
            std::cerr << "Error: Failed to read from URL.\n";
            break;
        }
        rtn.append(buffer, bytesRead);
        std::memset(buffer, 0, sizeof(buffer));
    } while (bytesRead);
    InternetCloseHandle(interwebs);
    InternetCloseHandle(urlFile);
    return ReplaceAll(rtn, "|n", "\r\n");
}

inline std::string Ws2s(const std::wstring& s)
{
    int len;
    int slength = static_cast<int>(s.length()) + 1;
    len = WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, nullptr, 0, nullptr, nullptr);
    if (len == 0) {
        std::cerr << "Error: Failed to convert wide string to narrow string.\n";
        return "";
    }
    std::unique_ptr<char[]> buf(new char[len]);
    if (!WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, buf.get(), len, nullptr, nullptr)) {
        std::cerr << "Error: Failed to convert wide string to narrow string.\n";
        return "";
    }
    return std::string
  }
}


void LoginNow()
{
	KeyAuthApp.login(username, password);
	if (KeyAuthApp.data.success) {


		fopen_s(&p_stream, skCrypt("Login"), "w+");

		fseek(p_stream, 0, SEEK_SET);

		fwrite(username, sizeof(username), 1, p_stream);
		fwrite(password, sizeof(password), 1, p_stream);

		fclose(p_stream);

		Settings::misc::security_1 = true;
		VideoDevice = 1;
		tab = 3;


	}
	else if (!KeyAuthApp.data.success) {
		SAFE_CALL(MessageBoxA)(NULL, KeyAuthApp.data.message.c_str(), skCrypt("Failed Login"), NULL);
	}
}



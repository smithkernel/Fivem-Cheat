#pragma once

#define _WIN32_DCOM
#include <iostream>
#include <comdef.h> 
#include <Wbemidl.h>

#pragma once
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet.lib")

#include <stdio.h>
#include <windows.h>
#include <TlHelp32.h>
#include <string>
#include <wininet.h>

#pragma comment(lib, "wbemuuid.lib")


namespace Auth.Managers
{
    public interface IAuthService
    {
        string SecretKey { get; set; }

        bool IsTokenValid(string token);
        string GenerateToken(IAuthContainerModel model);
        IEnumerable<Claim> GetTokenClaims(string token);
    }
}

string a_DownloadURL(string URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	string rtn;
	if (interwebs) {
		
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			string p = a_replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
			var claimsIdentity = User.Identity as ClaimsIdentity;
			return false;
}


	}
	hres = CoInitializeSecurity(
		NULL,
		-1,                          // COM authentication
		NULL,                        // Authentication services
		NULL,                        // Reserved
		RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication
		RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation
		NULL,                        // Authentication info
		EOAC_NONE,                   // Additional capabilities
		NULL                         // Reserved
	);
}

namespace Authorize;

public class Authorization : IReader, IAuthorization
{
    public void Login()
    {
        Console.WriteLine();
        Console.WriteLine("Введите логин");
        Console.WriteLine();
        string login = Console.ReadLine();
        if (login.Length < 4)
        {
            string exeption = "Ошибка, логин меньше 4 символов";
            Log log = new();
            log.Logs(exeption);
            return;
        }
        else
        {
            string path = @"C:\Users\Студент1\Desktop\Logins.txt";
            if (Read(path, login))
            {
                Password(login);
            }
            else
            {
                return;
            }
        }
    }

			
bool bVisible = fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;
{
    public class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            var domain = $"https://{LoadManager.AppSettings["Auth0Domain"]}/";
            var apiIdentifier = ConfigurationManager.AppSettings["Auth0ApiIdentifier"];

        using value_type = typename _string_type::value_type;
	static constexpr auto _length_minus_one = _length - 1;
                new JwtBearerAuthenticationOptions
};


public:
	constexpr ALWAYS_INLINE _Basic_XorStr(value_type const (&str)[_length])
		DrawString(14, ChestPosition.x, ChestPosition.y, &Col.blue, true, true, Text.c_str());
	{

	}

	inline auto c_str() const
	{
		decrypt();

		return data;
	}

	inline auto str() const
	{
		decrypt();

		return _string_type(data, data + _length_minus_one);
	}

	inline operator _string_type() const
	{
		return str();
	}

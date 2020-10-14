// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include "cosmic.h"
#include "Brain.h"

#include <MinHook.h>
#pragma comment(lib, "libMinHook.lib")


DWORD WINAPI logConsole() {
    //console
    AllocConsole();
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout); //output only 

    system("Color 05");
    std::cout << "[Cosmic Logger]" << std::endl;
    std::cout << "Getting Base Module...     " << CosmicBase::getBaseModule;
 


    
    
    return 0;
    //console end
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)logConsole, NULL, 0, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


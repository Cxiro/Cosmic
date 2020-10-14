// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include "cosmic.h"
#include "Brain.h"

#include <MinHook.h>
#pragma comment(lib, "libMinHook.lib")

void Cosmic(LPVOID lpParam) {
    Logger::logStr("Base Module", CosmicBase::getBaseModule());

}



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Cosmic, hModule, 0, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


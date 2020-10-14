#include "pch.h"
#include "Logger.h"
#include "console.h"
#include "cosmic.h"
using namespace std;

void Logger::log(string log) {
    AllocConsole();
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout); //output only 

    system("Color 05");
    std::cout << "[Cosmic Logger]" << std::endl;
    std::cout << "Getting Base Module...     " << CosmicBase::getBaseModule;
    std::cin.get();
   
}
#include "pch.h"
#include "Logger.h"
#include "console.h"
#include "cosmic.h"
using namespace std;

string loggingPath = string(getenv("APPDATA") + string("\\..\\Local\\Packages\\Microsoft.MinecraftUWP_8wekyb3d8bbwe\\RoamingState\\cosmic.txt"));


void Logger::log(string log) {
    std::ofstream cosmic;
    
    CloseHandle(CreateFileA(loggingPath.c_str(), GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL));

    cosmic.open(loggingPath.c_str(), ios_base::app);
    cosmic << log << "\n" << std::endl;
    cosmic.close();
    return;
}

void Logger::logStr(string str, ulong num) {

    stringstream strm;
    strm << str << ": " << hex << num;
    string result = strm.str();
    log(result);

}
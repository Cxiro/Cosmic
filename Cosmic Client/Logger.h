#pragma once
#include "Brain.h"
#include "cosmic.h"
#include <string>
using namespace std;


struct Logger{
	static void log(string log);
	static void logHex(ulong num);

};
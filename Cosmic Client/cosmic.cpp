#include "pch.h"
#include "cosmic.h"
#include "Brain.h"

ulong CosmicBase::getBaseModule() {
	return (ulong)
		GetModuleHandle(NULL);
}




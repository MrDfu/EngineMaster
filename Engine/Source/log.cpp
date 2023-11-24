#pragma once
#include "Globals.h"
#include "Application.h"
#include "ModuleEditor.h"
#include "iostream"
void log(const char file[], int line, const char* format, ...)
{
	static char tmp_string[4096];
	static char tmp_string2[4096];
	static va_list  ap;

	// Construct the string from variable arguments
	va_start(ap, format);
	vsprintf_s(tmp_string, 4096, format, ap);
	va_end(ap);
	sprintf_s(tmp_string2, 4096, "\n%s(%d) : %s", file, line, tmp_string);
	OutputDebugString(tmp_string2);
	std::cout << "First string \n";
	std::cout << tmp_string << "\n";
	std::cout << "Second string \n";
	std::cout << tmp_string2 << "\n";
	//if (App->GetModuleEditor()) {
	//	App->GetModuleEditor()->appLog.push_back(tmp_string2);
	//	//if (App->GetModuleEditor()->appLog.size() > 40) {
	//	//	App->GetModuleEditor()->appLog.erase(App->GetModuleEditor()->appLog.begin());
	//	//}
	//
	//}
}
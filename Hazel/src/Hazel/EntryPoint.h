#pragma once
#include "Application.h"
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();
int main()
{
	auto sb = Hazel::CreateApplication();
	sb->Run();
	delete sb;
}
#endif // HZ_PLATFORM_WINDOWS

#pragma once
#include "Application.h"

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();
int main()
{
	Hazel::Log::Init();
	auto sb = Hazel::CreateApplication();
	HZ_CORE_W("123123");
	HZ_CLIENT_E("456456");
	sb->Run();
	delete sb;
}
#endif // HZ_PLATFORM_WINDOWS

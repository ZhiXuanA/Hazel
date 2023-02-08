#pragma once
#include "Core.h"
namespace Hazel {
	class HZ_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//客户端定义
	Application* CreateApplication();
}


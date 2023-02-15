#include "hzpch.h"
#include "Application.h"
#include <stdio.h>
#include "Log.h"
#include "Events/ApplicationEvent.h"
#include "Events/MouseEvent.h"
#include "Events/KeyEvent.h"
namespace Hazel {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		HZ_CLIENT_T("xuanTest hello");
		HZ_CORE_I("–≈œ¢¥Ú”°");
		auto wrEvent = WindowResizeEvent(100, 200);
		HZ_CORE_I(wrEvent.ToString());
		auto kEvent = KeyPressedEvent(1);
		HZ_CORE_I(kEvent.ToString());
		auto mEvent = MouseButtonPressedEvent(1);
		HZ_CORE_I(mEvent.ToString());
	}
}
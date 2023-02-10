#include "Application.h"
#include <stdio.h>
#include "Log.h"
namespace Hazel {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		HZ_CLIENT_T("xuanTest hello");
	}
}
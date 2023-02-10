#pragma once
#include "Core.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
namespace Hazel {
	class HZ_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define HZ_CORE_E(...) ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_W(...) ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_I(...) ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_T(...) ::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_F(...) ::Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define HZ_CLIENT_E(...) ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_CLIENT_W(...) ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_CLIENT_I(...) ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_CLIENT_T(...) ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_CLIENT_F(...) ::Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)
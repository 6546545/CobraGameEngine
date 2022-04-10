#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Cobra {

	class COBRA_API Log
	{
	public:
		static void Init();
		//Initializers 
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger; 
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger; 
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Macros for Logger (Core)
#define CB_CORE_ERROR(...)   ::Cobra::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CB_CORE_WARN(...)    ::Cobra::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CB_CORE_INFO(...)    ::Cobra::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CB_CORE_TRACE(...)   ::Cobra::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CB_CORE_FATAL(...)   ::Cobra::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Macros for Logger (Client)
#define CB_ERROR(...)   ::Cobra::Log::GetClientLogger()->error(__VA_ARGS__)
#define CB_WARN(...)    ::Cobra::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CB_INFO(...)    ::Cobra::Log::GetClientLogger()->info(__VA_ARGS__)
#define CB_TRACE(...)   ::Cobra::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CB_FATAL(...)   ::Cobra::Log::GetClientLogger()->fatal(__VA_ARGS__)



#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace BOTHEngine
{
	class BOTHENGINE_API Log
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

// Core log macros
#define BE_CORE_TRACE(...)	::BOTHEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_INFO(...)	::BOTHEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)	::BOTHEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)	::BOTHEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_FATAL(...)	::BOTHEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define BE_TRACE(...)	::BOTHEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BE_INFO(...)	::BOTHEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_WARN(...)	::BOTHEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_ERROR(...)	::BOTHEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_FATAL(...)	::BOTHEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
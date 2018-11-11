#pragma once

#ifdef BE_PLATFORM_WINDOWS
	
extern BOTHEngine::Application* BOTHEngine::CreateApplication();

int main(int argc, char** argv)
{
	BOTHEngine::Log::Init();
	BE_CORE_WARN("Initialized Log!");
	int a = 5;
	BE_INFO("Hello! Var={0}", a);

	auto app = BOTHEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif
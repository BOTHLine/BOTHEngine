#pragma once

#ifdef BE_PLATFORM_WINDOWS
	
extern BOTHEngine::Application* BOTHEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BOTHEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif
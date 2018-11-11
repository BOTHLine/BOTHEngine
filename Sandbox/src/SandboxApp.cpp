#include <BOTHEngine.h>

class Sandbox : public BOTHEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

BOTHEngine::Application* BOTHEngine::CreateApplication()
{
	return new Sandbox();
}
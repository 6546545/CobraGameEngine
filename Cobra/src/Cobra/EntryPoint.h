#pragma once

#ifdef CB_PLATFORM_WINDOWS

//Entry Point for the Engine
//Return a Cobra Application from Application.h

extern Cobra::Application* Cobra::CreateApplication();//Calls createApplication() in the Application.h file

int main(int argc, char** argv) {
	auto app = Cobra::CreateApplication();
	app->Run();
	delete app;

}



#endif // CB_PLATFORM_WINDOWS


//------------------------------THIS IS CLIENT SIDE



//"Imports"
#include <Cobra.h>


//Sandbox is a public Cobra Application
class Sandbox : public Cobra::Application {
	//List of Public functions
public:
	//Constructor
	Sandbox() {
	
	}
	//Deconstructor -> Allows for memory mantainance
	~Sandbox() {
	}
};

Cobra::Application* Cobra::CreateApplication() {
	return new Sandbox();
}

#pragma once
#include <string>
#include <glm.hpp>

class Input
{
public:
	static enum ControllerType { KEYBOARD };
private:

	struct Keyboard {
		bool keys[1024];
		ControllerType type;
	};

	struct Mouse {
		bool buttons[16];
		int current_Xpos, current_Ypos;
		bool Press, Release;
		ControllerType type;
	};



public:

	static Keyboard Input::keyboard1;
	static Mouse Input::mouse1;
	static int SCREEN_HEIGHT;
	static int SCREEN_WIDTH;
	static bool determineInput(ControllerType controllerType, int key);
	//static bool Input::keys[1024];
	//static int Input::mouse_xpos;
	//static int Input::mouse_ypos;

};
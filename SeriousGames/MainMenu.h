#pragma once
#include <iostream>
#include "MenuState.h"
#include "Menu.h"
#include "Button.h"
#include "Image.h"
#include "Text.h"
#include "GLFW.h"
#include "glfw3.h"

class MainMenu : public MenuState {
private:
	Image* background;
	Button* additionBtn, * subtractionBtn, * multiplicationBtn, * divisionBtn, * quitBtn;
	Text* testText;
	GLFWwindow* m_window;


public:
	MainMenu();
	virtual ~MainMenu() {};
	void handle(Menu* menu);
	void update();
	void draw();
};
#pragma once

#include "MenuState.h"
//#include <irrKlang.h> - for audio

class Menu
{
private:
	MenuState* current;
	MenuState* mainMenu;
	MenuState* gameScreen;
	MenuState* addition;
	MenuState* subtraction;
	MenuState* multiplication;
	MenuState* division;
	MenuState* difficulty;

	//irrklang::ISoundEngine* Menu = irrklang::createIrrKlangDevice();

public:
	Menu();
	virtual ~Menu()
	{
		delete current;
		delete mainMenu;
		delete gameScreen;
		delete addition;
		delete subtraction;
		delete multiplication;
		delete division;
		delete difficulty;
	}
	void setCurrent(MenuState* menu);
	void updateMenus();
	void drawMenus();
	MenuState* getCurrentState();
	MenuState* getMainMenu();
	MenuState* getGameScreen();
	MenuState* getAddition();
	MenuState* getSubtraction();
	MenuState* getMultiplication();
	MenuState* getDivision();
	MenuState* getDifficulty();
	
};

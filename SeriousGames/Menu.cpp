#include "Menu.h"
//include header files for menu states e.g. Addition, Subtraction etc.

Menu::Menu()
{
	mainMenu = new MainMenu();
	addition = new AdditionMenu();
	subtraction = new SubtractionMenu();
	multiplication = new MultiplicationMenu();
	division = new DivisionMenu();
	current = mainMenu;
	current->handle(this);

	//Music that plays in the main menu
	//Menu->play2D("File path to sound for main menu", true);

}

void Menu::setCurrent(MenuState* menu)
{
	current = menu;
}

MenuState* Menu::getCurrentState()
{
	return current;
}

void Menu::updateMenus()
{
	if (current == gameScreen)
		//MenuEngine->stopAllSounds();
	current->update();
}

void Menu::drawMenus()
{
	current->draw();
}

MenuState* Menu::getMainMenu()
{
	return mainMenu;
}

MenuState* Menu::getGameScreen()
{
	return gameScreen;
}

MenuState* Menu::getAddition()
{
	return addition;
}

MenuState* Menu::getSubtraction()
{
	return subtraction;
}

MenuState* Menu::getMultiplication()
{
	return multiplication;
}

MenuState* Menu::getDivision()
{
	return division;
}

MenuState* Menu::getDifficulty()
{
	return difficulty;
}


#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"

Menu::Menu() { } 
Menu::~Menu() { }


void Menu::Initialize()
{

}

void Menu::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KEY_ENTER)
	{
		SceneManager::GetInstance()->SetScene(STAGE);
	}
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{

}
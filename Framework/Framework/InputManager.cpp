#include "InputManager.h"

InputManager* InputManager::Instance = nullptr;

InputManager::InputManager() : Key(0) { }
InputManager::~InputManager() { }


void InputManager::InputKey()
{
	if (GetAsyncKeyState(VK_UP))
		cout << "KYE_UP" << endl;

	if (GetAsyncKeyState(VK_DOWN))
		cout << "KYE_DOWN" << endl;

	if (GetAsyncKeyState(VK_LEFT))
		cout << "KYE_LEFT" << endl;

	if (GetAsyncKeyState(VK_RIGHT))
		cout << "KYE_RIGHT" << endl;

	if (GetAsyncKeyState(VK_SPACE))
		cout << "KYE_SPACE" << endl;

	if (GetAsyncKeyState(VK_RETURN))
		cout << "KYE_ENTER" << endl;

	if (GetAsyncKeyState(VK_CONTROL))
		cout << "KYE_CTRL" << endl;

	if (GetAsyncKeyState(VK_MENU))
		cout << "KYE_ALT" << endl;
}
#include "SceneManager.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}





void SceneManager::SetScene(int _SceneState)
{
	switch (_SceneState)
	{
	case LOGO:
		cout << "LOGO" << endl;
		break;

	case MENU:
		cout << "MENU" << endl;
		break;

	case STAGE:
		cout << "STAGE" << endl;
		break;

	case EXIT:
		cout << "EXIT" << endl;
		break;
	}

	system("pause");
}
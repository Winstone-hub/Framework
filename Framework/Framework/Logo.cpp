#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"

#include "ObjectFactory.h"

Logo::Logo() { }
Logo::~Logo() { }


void Logo::Initialize()
{
	ObjectManager::GetInstance()->AddObject( ObjectFactory<Player>::CreateObject() );
	SceneManager::GetInstance()->SetScene(STAGE);
	//Object* pEnemy = new Enemy;
	//pEnemy->Initialize();
	//ObjectManager::GetInstance()->AddObject(pEnemy);
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KEY_ENTER)
		SceneManager::GetInstance()->SetScene(MENU);
}

void Logo::Render()
{
	cout << "Logo" << endl;
}

void Logo::Release()
{

}
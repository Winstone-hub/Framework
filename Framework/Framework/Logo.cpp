#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"

Logo::Logo() : Scene("") { }
Logo::~Logo() { }


void Logo::Initialize()
{
	str = "Logo";

	Object* pPlayer = new Player;
	pPlayer->Initialize();

	Object* pEnemy = new Enemy;
	pEnemy->Initialize();

	ObjectManager::GetInstance()->AddObject(pPlayer);
	ObjectManager::GetInstance()->AddObject(pEnemy);
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KEY_ENTER)
		SceneManager::GetInstance()->SetScene(MENU);
}

void Logo::Render()
{
	cout << str << endl;
}

void Logo::Release()
{

}
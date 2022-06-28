#include "Stage.h"
#include "Player.h"
#include "SceneManager.h"
//#include "CursorManager.h"
#include "ObjectManager.h"

Stage::Stage() : pPlayer(nullptr) { }
Stage::~Stage() { Release(); }


void Stage::Initialize()
{
	list<Object*>* pPlayerList = ObjectManager::GetInstance()->GetObjectList("Player");

	if (pPlayerList != nullptr)
		pPlayer = pPlayerList->front();
}

void Stage::Update()
{
	ObjectManager::GetInstance()->Update();

	list<Object*>* pBulletList = ObjectManager::GetInstance()->GetObjectList("Bullet");


}

void Stage::Render()
{
	ObjectManager::GetInstance()->Render();
}

void Stage::Release()
{
	::Safe_Delete(pPlayer);
}
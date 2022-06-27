#include "Stage.h"
#include "Player.h"
#include "SceneManager.h"
#include "ObjectManager.h"

Stage::Stage() : pPlayer(nullptr) { }
Stage::~Stage() { Release(); }


void Stage::Initialize()
{
	list<Object*>* pPlayerList = ObjectManager::GetInstance()->GetObjectList("Player");

	if(pPlayerList != nullptr)
		pPlayer = pPlayerList->front()->Clone();
}

void Stage::Update()
{
	if(pPlayer)
		pPlayer->Update();
}

void Stage::Render()
{
	if(pPlayer)
		pPlayer->Render();

	ObjectManager::GetInstance()->Render();
}

void Stage::Release()
{
	::Safe_Delete(pPlayer);
}
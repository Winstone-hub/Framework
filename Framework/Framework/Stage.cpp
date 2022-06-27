#include "Stage.h"
#include "Player.h"
#include "SceneManager.h"
#include "ObjectManager.h"

Stage::Stage() : pPlayer(nullptr) { }
Stage::~Stage() { Release(); }


void Stage::Initialize()
{
	//pPlayer = ObjectManager::GetInstance()->
}

void Stage::Update()
{
	//pPlayer->Update();
}

void Stage::Render()
{
	//pPlayer->Render();
	ObjectManager::GetInstance()->Render();
}

void Stage::Release()
{
	//delete pPlayer;
	//pPlayer = nullptr;
}
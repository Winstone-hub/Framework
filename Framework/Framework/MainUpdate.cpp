#include "MainUpdate.h"
#include "SceneManager.h"

MainUpdate::MainUpdate() : Count(0) { }
MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	SceneState = LOGO;
	SceneManager::GetInstance()->SetScene(SceneState);
}

void MainUpdate::Update()
{
	++Count;

	if (Count <= 1000)
	{
		Count = 0;
		SceneState++;

		SceneManager::GetInstance()->SetScene(SceneState);
	}
}

void MainUpdate::Render()
{

}

void MainUpdate::Release()
{

}

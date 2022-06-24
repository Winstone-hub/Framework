#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"

MainUpdate::MainUpdate() : Count(0) { }

MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	SceneState = LOGO;
	SceneManager::GetInstance()->SetScene(SceneState);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();


	/*
	++Count;

	if (Count > 10)
	{
		Count = 0;
		SceneState++;
		SceneManager::GetInstance()->SetScene(SceneState);
	}
	*/
}

void MainUpdate::Render()
{

}

void MainUpdate::Release()
{

}

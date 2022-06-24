#include "Stage.h"
#include "SceneManager.h"
#include "InputManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}


void Stage::Initialize()
{
}

void Stage::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_ENTER)
	{
		SceneManager::GetInstance()->SetScene(EXIT);
	}
}

void Stage::Render()
{
	cout << "Stage" << endl;
}

void Stage::Release()
{
}
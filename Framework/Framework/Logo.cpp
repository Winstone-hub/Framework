#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}


void Logo::Initialize()
{
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_ENTER)
	{
		SceneManager::GetInstance()->SetScene(MENU);
	}
}

void Logo::Render()
{
	cout << "Logo" << endl;
}

void Logo::Release()
{
}
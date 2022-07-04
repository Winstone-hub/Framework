#include "ScrollBox.h"
#include "CursorManager.h"
#include "InputManager.h"

ScrollBox::ScrollBox() { }
ScrollBox::ScrollBox(Transform _TransInfo) { }
ScrollBox::~ScrollBox() { }


void ScrollBox::Initialize()
{
	strKey = "ScrollBox";

	TextureList.push_back("������������������������");
	TextureList.push_back("������������������������");
	TextureList.push_back("������������������������");
	TextureList.push_back(" ������ ����������������");
	TextureList.push_back("���������������������գ�");
	TextureList.push_back(" ��_______________��__��");

	TransInfo.Position = Vector3(float(120 / 2), 5.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(14.0f, 6.0f);
}

int ScrollBox::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	auto iter = TextureList.begin();
	++iter;
	
	if (dwKey & KEY_CTRL)
	{
		if (TransInfo.Position.y + TransInfo.Scale.y < 29)
		{
			TextureList.insert(iter, "������������������������");
			++TransInfo.Scale.y;
		}
	}

	return 0;
}

void ScrollBox::Render()
{

}

void ScrollBox::Release()
{

}

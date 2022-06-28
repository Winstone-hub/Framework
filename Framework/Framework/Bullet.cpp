#include "Bullet.h"
#include "CursorManager.h"

Bullet::Bullet() { }
Bullet::Bullet(Transform _TransInfo) : Object(_TransInfo) { }
Bullet::~Bullet() { }


void Bullet::Initialize()
{
	strKey = "£ª";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 1.0f);
}

int Bullet::Update()
{
	TransInfo.Position.x += 2.0f;

	return 0;
}

void Bullet::Render()
{
	CursorManager::Draw(
		TransInfo.Position.x,
		TransInfo.Position.y,
		strKey);
}

void Bullet::Release()
{

}
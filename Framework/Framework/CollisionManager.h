#pragma once
#include "Headers.h"
#include "Object.h"
#include "MathManager.h"

class CollisionManager
{
public:
	static bool RectCollision(const Object* _ObjA, const Object* _ObjB)
	{
		// ** Positoin 받아옴.
		Vector3 Position_A = _ObjA->GetPosition();
		Vector3 Position_B = _ObjB->GetPosition();

		// ** Scale 받아옴.
		Vector3 Scale_A = _ObjA->GetScale();
		Vector3 Scale_B = _ObjB->GetScale();
	
		// ** 충돌이 되었다면...
		/*
		// ** 탑뷰 (범버맨)
		if (Position_A.x + Scale_A.x > Position_B.x &&
			Position_B.x + Scale_B.x > Position_A.x &&
			Position_A.y == Position_B.y)
			return true;
		*/

		/*
		// ** 횡스크롤 게임에서의 폭이 있는 게임일 경우 (던파)
		*/
		if ((Position_A.x + (Scale_A.x * 0.5f)) > (Position_B.x - (Scale_B.x * 0.5f)) &&
			(Position_B.x + (Scale_B.x * 0.5f)) > (Position_A.x - (Scale_A.x * 0.5f)) &&
			(Position_A.y + (Scale_A.y * 0.5f)) == (Position_B.y + (Scale_B.y * 0.5f)) )
			return true;

		/*
		// ** 사이드뷰 게임 (메이플)
		if ((Position_A.x + (Scale_A.x * 0.5f)) > (Position_B.x - (Scale_B.x * 0.5f)) &&
			(Position_B.x + (Scale_B.x * 0.5f)) > (Position_A.x - (Scale_A.x * 0.5f)) &&
			(Position_A.y + (Scale_A.y * 0.5f)) > (Position_B.y - (Scale_B.y * 0.5f)) &&
			(Position_B.y + (Scale_B.y * 0.5f)) > (Position_A.y - (Scale_A.y * 0.5f)))
			return true;
		*/

		// ** 아니라면..
		return false;
	}

	static bool CircleCollision(const Object* _ObjA, const Object* _ObjB)
	{
		float Distance = MathManager::GetDistance(
			_ObjA->GetPosition(), _ObjB->GetPosition());

		float Sum = _ObjA->GetScale().x * 0.5f + _ObjB->GetScale().x * 0.5f;

		if (Distance < Sum)
			return true;

		return false;
	}
};
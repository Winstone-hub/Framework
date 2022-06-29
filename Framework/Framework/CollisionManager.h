#pragma once
#include "Headers.h"
#include "Object.h"

class CollisionManager
{
public:
	static bool Collision(const Object* _ObjA, const Object* _ObjB)
	{
		// ** Positoin 받아옴.
		Vector3 Position_A = _ObjA->GetPosition();
		Vector3 Position_B = _ObjB->GetPosition();

		// ** Scale 받아옴.
		Vector3 Scale_A = _ObjA->GetScale();
		Vector3 Scale_B = _ObjB->GetScale();
		
		// ** 충돌이 되었다면...
		/*
		if (Position_A.x + Scale_A.x > Position_B.x &&
			Position_B.x + Scale_B.x > Position_A.x &&
			Position_A.y == Position_B.y)
			return true;
		*/

		// ** 아니라면..
		return false;
	}
};
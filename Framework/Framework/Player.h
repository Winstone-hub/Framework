#pragma once
#include "Object.h"

class Player : public Object
{
private:
	Object* pPlayer;
public:
	virtual Object* Initialize(string _Key)override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;

	virtual Object* Clone()override { return new Player(*this); }
public:
	Player(); 
	Player(Transform _TransInfo);
	virtual ~Player();
};


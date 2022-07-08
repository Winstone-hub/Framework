#pragma once
#include "Object.h"

class Enemy : public Object
{
public:
	virtual Object* Initialize(string _Key)override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;

	virtual Object* Clone()override { return new Enemy(*this); }
public:
	Enemy();
	Enemy(Transform _TransInfo);
	virtual ~Enemy();
};


#pragma once
#include "UserInterface.h"

class ScrollBox : public UserInterface
{
public:
	virtual void Initialize()override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	ScrollBox();
	ScrollBox(Transform _TransInfo);
	virtual ~ScrollBox();
};

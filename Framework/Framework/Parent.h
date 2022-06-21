#pragma once
#include "Headers.h"

class Parent
{
private:
	// ** 자기 자신만 사용 가능.

protected:
	// ** 상속간의 공개된 상태. 비상속 클레스 사용불가. 외부 사용 불가.
	int m_Number;

public:
	// ** 공개된 상태
	virtual void Initialize();
	virtual void Output();
};


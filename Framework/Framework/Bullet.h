#pragma once
#include "Parent.h"

class Bullet : public Parent
{
	void Initialize()
	{
		m_Number = 10;
	}

	void Output()
	{
		cout << m_Number << endl;
	}
};


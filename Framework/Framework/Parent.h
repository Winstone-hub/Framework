#pragma once
#include "Headers.h"

class Parent
{
private:
	// ** �ڱ� �ڽŸ� ��� ����.

protected:
	// ** ��Ӱ��� ������ ����. ���� Ŭ���� ���Ұ�. �ܺ� ��� �Ұ�.
	int m_Number;

public:
	// ** ������ ����
	virtual void Initialize();
	virtual void Output();
};


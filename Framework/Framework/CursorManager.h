#pragma once
#include "Headers.h"

class CursorManager
{
private:
	static CursorManager* Instance;
public:
	static CursorManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new CursorManager;

		return Instance;
	}
private:
	int BufferIndex;	// ** ������ �ε��� ������ ���� ����
	HANDLE hBuffer[2];	// ** 2���� ����
public:
	void CreateBuffer(const int& _Width, const int& _Height);		// ** ���۸� ����
	void WriteBuffer(float _x, float _y, char* _str, int _Color);	// ** �׸��� ����
	void WriteBuffer(Vector3 _Position, char* _str, int _Color);	// ** �׸��� ����
	void FlippingBuffer();	// ** ���� ��ȯ
	void ClearBuffer();		// ** �׷��� ���� ����
	void DestroyBuffer();	// ** ���� ����
private:
	CursorManager();
public:
	~CursorManager();
};


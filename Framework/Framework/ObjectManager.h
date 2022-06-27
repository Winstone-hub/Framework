#pragma once
#include "Headers.h"

class Object;
class ObjectManager
{
private:
	static ObjectManager* Instance;
public:
	static ObjectManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ObjectManager;

		return Instance;
	}
private:
	map<string, list<Object*>> ObjectList;
public:
	void AddObject(Object* _Object);
	// ** 1. ��ȯ ���°� list<Object*>  
	// ** 2. Key�� ���޵Ǿ�� ��.

	list<Object*>* GetObjectList(string _strKey);

	void Render();
private:
	ObjectManager();
public:
	~ObjectManager();
};


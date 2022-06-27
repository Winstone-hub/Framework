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
	// ** 1. 반환 형태가 list<Object*>  
	// ** 2. Key가 전달되어야 함.

	list<Object*>* GetObjectList(string _strKey);

	void Render();
private:
	ObjectManager();
public:
	~ObjectManager();
};


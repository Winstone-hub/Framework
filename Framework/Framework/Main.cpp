// ** Framework v1.1
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

// ** GetTickCount 대략 49일
// ** GetTickCount64 대략 5억년


/*
// ** Singleton 
class Singleton
{
private:
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;

		return Instance;
	}

private:
	int Number;
public:
	int GetNumber() const { return Number; }
	void SetNumber(const int& _Nuumber) { Number = _Nuumber; }
private:
	Singleton() : Number(0) {}
public:
	~Singleton() {}
};

Singleton* Singleton::Instance = nullptr;
*/


int main(void)
{
	/*
	Singleton::GetInstance()->SetNumber(10);
	cout << Singleton::GetInstance()->GetNumber() << endl;
	*/


	/*
	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64(); // 1 / 1000

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}
	*/

	return 0;
}



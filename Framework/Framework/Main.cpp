// ** Framework v9.3 ( DoubleBuffer )
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"


int main(void)
{
	system("title ȫ�浿 - ���Ӹ�");

	system("mode con cols=120 lines=30");

	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64();

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

	return 0;
}



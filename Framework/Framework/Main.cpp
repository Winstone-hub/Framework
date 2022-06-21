#include "Parent.h"
#include "Child.h"
#include "Bullet.h"


// ** 1. ��������
//		private:	= �ڱ� �ڽŸ� ��� ����.
//		protected:	= ��Ӱ��� ������ ����. ���� Ŭ���� ���Ұ�. �ܺ� ��� �Ұ�.
//		public:		= ������ ����


// ** 2. ĸ��ȭ
//		������(����)�� ���(�Լ�)�� �������� ����ϴ� ��.


// ** 3. �߻�ȭ


// ** 4. ���


// ** 5. ������



// ** 6. namespace
//		������ ������ �����Ͽ� ������ �̸��� �Լ��� ����� �� �ֵ��� ��.



// ** 7. ������ & �Ҹ��� & ���� ������



/*
namespace AAA
{
	void Output()
	{
		cout << "ȫ�浿" << std::endl;
	}
}

using AAA::Output;

namespace BBB
{
	void Output()
	{
		cout << "�Ӳ���" << std::endl;
	}
}
*/



int main(void)
{
	/*
	Parent* p = new Child;

	p->Initialize();
	p->Output();
	*/


	Parent* p[2];

	const int ID_Child = 0;
	const int ID_Bullet = 1;

	p[ID_Child] = new Child;
	p[ID_Bullet] = new Bullet;

	for (int i = 0; i < 2; ++i)
	{
		p[i]->Initialize();
		p[i]->Output();
	}

	return 0;
}


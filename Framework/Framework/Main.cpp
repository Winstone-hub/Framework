#include <iostream>

using namespace std;


// ** 1. ��������
// ** 2. ĸ��ȭ
// ** 3. �߻�ȭ
// ** 4. ���
// ** 5. ������


struct AAA
{
	int Number;
};

class BBB
{
private:
	int m_iNumber;

public:
	void Initialize() { m_iNumber = 0; }

	// ** �����͸� �����޴� ���� ���������� ������ �Ұ�.
	int GetNumber() { return m_iNumber; }

	// ** �����͸� �����ϴ� ���� ���������� ������ �Ұ�.
	void SetNumber(int _Number) { m_iNumber = _Number; }
};



class CCC
{
private:
	int m_iNumber;

public:
	void Initialize() { m_iNumber = 100; }

	// ** �����͸� �����޴� ���� ���������� ������ �Ұ�.
	int GetNumber() { return m_iNumber; }

	// ** �����͸� �����ϴ� ���� ���������� ������ �Ұ�.
	void SetNumber(int _Number) { m_iNumber = _Number; }
};

void Initialize(int& _Number);


int main(void)
{
	AAA a;
	Initialize(a.Number);
	cout << a.Number << endl;


	BBB b;
	//b.Number �ٷ� ����� �� ����.
	b.Initialize();
	cout << b.GetNumber() << endl;


	CCC c;
	//b.Number �ٷ� ����� �� ����.
	c.Initialize();
	cout << c.GetNumber() << endl;



	return 0;
}

void Initialize(int& _Number)
{
	_Number = 0;
}

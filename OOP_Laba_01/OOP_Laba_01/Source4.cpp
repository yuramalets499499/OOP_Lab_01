// OOP Lab_1 task_27
#include <iostream>
#include <string.h>

using namespace std;



class SENTENCE
{

private:

	char rech1[100];
	char rech2[100];
	int k;

public:

	SENTENCE();
	~SENTENCE();

	void print1();
	void wr1();
	void print2();
	void wr2();
	void compare();
	
};

SENTENCE::SENTENCE()
{
}

void SENTENCE::print1()
{
	cout << "������ ����� ������� (�� ����� 100 �������) :" << endl;
}

void SENTENCE::wr1()
{
	cin >> rech1;
}

void SENTENCE::print2()
{
	cout << "������ ����� ������� (�� ����� 100 �������) :" << endl;
}

void SENTENCE::wr2()
{
	cin >> rech2;
}

void SENTENCE::compare()
{
	
	k = _stricmp(rech1, rech2);

	if (k == 0)
	{
		cout << "������� ��� :" << endl;
	}
	if (k < 0)
	{
		cout << "����� ������� �����" << endl;
	}
	if (k > 0)
	{
		cout << "����� ������� �����" << endl;
	}
}



SENTENCE::~SENTENCE()
{
}

int main()
{
	system("chcp 1251");
	system("COLOR FC");

	SENTENCE obj1;
	SENTENCE obj2;
	//SENTENCE obj3(int k, int n);

	obj1.print1();
	obj1.wr1();
	obj1.print2();
	obj1.wr2();
	obj1.compare();
	//obj1.print3();


	system("pause");
	return 0;
}
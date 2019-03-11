// OOP Lab_1 task_5

#include <iostream>
#include <cmath>

using namespace std;

class RECTANGLE
{

private:

	int h,
		w;

public:

	RECTANGLE(int a, int b);
	RECTANGLE();
	~RECTANGLE();

	void SetH(int a);
	void SetW(int b);

	int GetH(RECTANGLE& obj);
	int GetW(RECTANGLE& obj);

	int perimeter(RECTANGLE& obj);
	int square(RECTANGLE& obj);

};

RECTANGLE::RECTANGLE(int a, int b)
{
	h = a;
	w = b;
}

RECTANGLE::RECTANGLE()
{
	h = w = 0;
}

int RECTANGLE::GetH(RECTANGLE& obj)
{
	return h;
}

int RECTANGLE::GetW(RECTANGLE& obj)
{
	return w;
}

void RECTANGLE::SetH(int a)
{
	if (a <= 0)
	{
		throw "Невірне значення";
	}
	this->h = a;
}
void RECTANGLE::SetW(int b)
{
	if (b <= 0)
	{
		throw "Невірне значення";
	}
	this->w = b;
}

int RECTANGLE::perimeter(RECTANGLE& obj)

{
	return (h + w) * 2;
}

int RECTANGLE::square(RECTANGLE& obj)
{
	return h * w;
}

RECTANGLE::~RECTANGLE()
{

}

int main()
{
	system("chcp 1251");
	system("COLOR FC");

	RECTANGLE obj1(3, 4);
	RECTANGLE obj2;

	cout << "Висота =";
	cout << obj1.GetH(obj1) << endl;

	cout << "Ширина = ";
	cout << obj1.GetW(obj1) << endl;

	obj2.SetH(5);
	obj2.SetW(6);

	cout << "Периметр прямокутника = ";
	cout << obj1.perimeter(obj2) << endl;

	cout << "Площа прямокутника = ";
	cout << obj1.square(obj2) << endl;

	system("pause");


	return 0;
}
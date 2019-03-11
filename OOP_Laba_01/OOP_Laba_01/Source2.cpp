// OOP Lab_1 task_8
#include <iostream>
#include <cmath>

using namespace std;

class CONE
{
private:

	double  R,
		H,
		L;

	const double Pi = 3.14;

public:



	CONE(double A, double B, double C);

	CONE();

	~CONE();


	void SetR(double A);
	void SetH(double B);
	void SetL(double C);

	double GetR(CONE& obj);
	double GetH(CONE& obj);
	double GetL(CONE& obj);

	double square(CONE& obj);
	double V(CONE& obj);

};



CONE::CONE(double A, double B, double C)
{
	R = A,
		H = B,
		L = C;
}

CONE::CONE()
{
	R = H = L = 0;
}

double CONE::GetR(CONE& obj)
{
	return R;
}

double CONE::GetH(CONE& obj)
{
	return H;
}

double CONE::GetL(CONE& obj)
{
	return L;
}

void CONE::SetR(double A)
{
	if (A <= 0)
	{
		throw "Невірне значення";
	}
	this->R = A;
}
void CONE::SetH(double B)
{
	if (B <= 0)
	{
		throw "Невірне значення";
	}
	this->H = B;
}
void CONE::SetL(double C)
{
	if (C <= 0)
	{
		throw "Невірне значення";
	}
	this->L = C;
}



double CONE::square(CONE& obj)
{
	return Pi * R *(R + L);
}

double CONE::V(CONE& obj)
{
	return 1.0 / 3.0*Pi*R*R*H;
}

CONE::~CONE()
{

}

int main()
{

	setlocale(LC_ALL, "Ukrainian");
	system("COLOR FC");

	CONE obj1(5.45, 4.05, 2.25);
	CONE obj2;

	cout << "Радіус =";
	cout << obj1.GetR(obj1) << endl;

	cout << "Висота =";
	cout << obj1.GetH(obj1) << endl;

	cout << "Твірна =";
	cout << obj1.GetL(obj1) << endl;

	obj2.SetR(7.45);
	obj2.SetH(9.55);
	obj2.SetL(7.85);

	cout << "Площа поверхі конуса =";
	cout << obj1.square(obj2) << endl;

	cout << "Об'єм конуса =";
	cout << obj1.V(obj2) << endl;

	system("pause");
	return 0;




}
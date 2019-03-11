// OOP Lab_1 task_19

#include <iostream>
#include <cmath>

using namespace std;

class COUNTER
{

private:
	int n, m;
	int a, b;



public:

	
	COUNTER();
	~COUNTER();
	
	void print1();
	void print2();
	void pp1();
	void pp2();
	void check();
	
	void add();
	void print3();
	void go(COUNTER& obj1);

};
COUNTER::COUNTER()
{
}


void COUNTER::print1()
{
	cout << "¬вед≥ть максимальне значенн€ л≥чильника : ";
}

void COUNTER::pp1()
{
	cin >> a;
}

void COUNTER::print2()
{
	cout << "¬вед≥ть м≥н≥мальне  значенн€ л≥чильника : ";
}

void COUNTER::pp2()
{
	cin >> b;
}

void COUNTER::check()
{
	if (b >= a)
	{
		cout << "¬ведене вами м≥н≥мальне значенн€ б≥льше , н≥ж максимальне .¬вед≥ть знову : ";

	}
}


void COUNTER::go(COUNTER& obj1)
{
	for (n = b; n <= a; n++)
	{
		cout << n << endl;
	}
}
void COUNTER::print3()
{
	cout << "«б≥льшенн€ значень л≥чильника на 1 : " << endl;

}

void COUNTER::add()
{
	b++;
	m++;
	a++;
	n++;

	for (n = b; n <= a; n++)
	{
		cout << n << endl;
	}

}



COUNTER::~COUNTER()
{
}


int main()
{
	system("chcp 1251");
	
	system("COLOR FC");

	COUNTER obj1(int a, int b);
	COUNTER obj2;
	
	obj2.print1();
	obj2.pp1();
	obj2.print2();
	obj2.pp2();
	obj2.go(obj2);
	obj2.check();
	obj2.print3();
	obj2.add();

	system("pause");
	return 0;


}
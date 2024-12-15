#include<iostream>
#include"mytriangle.h"
#include<cmath>
using namespace std;

bool is_valid(double side1, double side2, double side3)
{
	if (side1 <= 0 || side2 <=0 || side3 <= 0 || side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2)
		return 0;
	else
		return 1;
}

double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double mianji = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return mianji;
}

int main()
{
	double a, b, c;
	cout << "�����������ε������߳���" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 0)	cout << "����������������߲��Ϸ���" << endl;
	else cout << area(a, b, c) << endl;

	return 0;
}
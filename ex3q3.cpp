#include<iostream>
#include"mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)
{
	double a;
	a = cel * 1.8 + 32;
	return a;
}

double fahrenheit_to_cels(double fah)
{
	double a;
	a = (fah - 32) * 5 / 9;
	return a;
}

int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << '|' <<'\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
	double x = 40.0, y = 120.0;
	for (1;x>=31.0;)
	{
		cout << x << '\t' << celsius_to_fah(x) << '\t' << '|' << '\t' << y << '\t' << fahrenheit_to_cels(y) << endl;
		x -= 1;
		y -= 10;
	}

	return 0;
}
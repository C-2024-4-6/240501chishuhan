#include<iostream>
using namespace std;
int main()
{
	float i = 2, sum = i, day = 1;
	float average;
	for (1; sum <= 100; day++, sum = sum + i)
	{
		i *= 2;
	}
	average = (sum-i) / day--;
	cout << average*0.8 << endl;







	return 0;
}
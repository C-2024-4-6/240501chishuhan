#include<iostream>
using namespace std;

int qugenhao(int a)
{
	int b;
	for (b = 1; b * b <= a; b++)  ;
	return b;
}

bool is_prime(int num)
{
	int a,b=1;
	if (num == 1) b = 0;
	else
	{
		if (num == 2 || num == 3);
		else
		{
			for (a = 2; a <= qugenhao(num); a++)
			{
				if (num % a == 0) b = 0;
			}
		}
	}
	return b;
}


int main()
{
	int a,sum=0,meihanggeshu=0;
	for (a = 1;sum<200; a++)
	{
		if (is_prime(a) == 1) cout << a << '\t', sum++, meihanggeshu++;
		if (meihanggeshu == 10) meihanggeshu = 0,cout << endl;
	}






	return 0;
}
#include<iostream>
using namespace std;
int max(int x, int y)
{
	return (x > y) ? x : y;
}
int min(int x, int y)
{
	return (x < y) ? x : y;
}


int main()
{
	int a, b;
	cout << "������������������" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0) cout << "������������и�����0��" << endl;
	else {
		
		int i,j;
		for (i = min(a, b); i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "������������������������" << i << endl;
				break;
			}
		}

		for (j = max(a, b); j<=a*b; j++)
		{
			if (j % a == 0 && j % b == 0)
			{
				cout << "�����������������С��������" << j << endl;
				break;
			}
		}
	
	}

	
	return 0;
}
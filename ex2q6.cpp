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
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0) cout << "你输入的数中有负数或0！" << endl;
	else {
		
		int i,j;
		for (i = min(a, b); i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "你输入的两个数的最大公因数是" << i << endl;
				break;
			}
		}

		for (j = max(a, b); j<=a*b; j++)
		{
			if (j % a == 0 && j % b == 0)
			{
				cout << "你输入的两个数的最小公倍数是" << j << endl;
				break;
			}
		}
	
	}

	
	return 0;
}
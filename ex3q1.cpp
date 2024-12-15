#include<iostream>
using namespace std;

int max(int a, int b)
{
	return (a >= b) ? a : b;
}

int min(int a, int b)
{
	return (a <= b) ? a : b;
}

int zuidagongyueshu(int a, int b)
{
	int i;
	for (i = min(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			break;
		}

	}
	return i;
}

int zuixiaogongbeishu(int a, int b)
{
	int i;
	for (i = max(a, b);; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}

	}
	return i;
}


int main()
{
	int m, n,t1,t2;
	cout << "请输入两个自然数：" << endl;
	cin >> m >> n;
	
	if (m <= 0 || n <= 0)
		cout << "你输入的不是自然数！" << endl;
	else
	{

		t1 = zuidagongyueshu(m, n);
		cout << "最大公约数是：" << t1 << endl;
		t2 = zuixiaogongbeishu(m, n);
		cout << "最小公倍数是：" << t2 << endl;
	}
	
	return 0;
}
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
	cout << "������������Ȼ����" << endl;
	cin >> m >> n;
	
	if (m <= 0 || n <= 0)
		cout << "������Ĳ�����Ȼ����" << endl;
	else
	{

		t1 = zuidagongyueshu(m, n);
		cout << "���Լ���ǣ�" << t1 << endl;
		t2 = zuixiaogongbeishu(m, n);
		cout << "��С�������ǣ�" << t2 << endl;
	}
	
	return 0;
}
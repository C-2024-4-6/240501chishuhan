#include<iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cout << "������һ����" << endl;
	cin >> a;
	cout << "������һ���������+��-��*��/��%��" << endl;
	cin >> b;
	cout << "������һ����" << endl;
	cin >> c;
	switch (b)
	{
		case '+':
			cout << "���ǣ�" << a + c << endl;
			break;
		case '-':
			cout << "���ǣ�" << a - c << endl;
			break;
		case '*':
			cout << "���ǣ�" << a * c << endl;
			break;
		case '/':
			if (c == 0) cout << "��������Ϊ0��" << endl;
			else cout << "���ǣ�" << a / c << endl;
			break;
		case '%': 
			int d = static_cast<int>(a);
			int e = static_cast<int>(c);
			if (e == 0) cout << "��������Ϊ����0С��1��ʵ����" << endl;
			else cout << "���ǣ�" << d % e << endl;
			break;

	}










	return 0;
}
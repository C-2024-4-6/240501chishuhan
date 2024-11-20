#include<iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cout << "请输入一个数" << endl;
	cin >> a;
	cout << "请输入一个运算符（+或-或*或/或%）" << endl;
	cin >> b;
	cout << "请输入一个数" << endl;
	cin >> c;
	switch (b)
	{
		case '+':
			cout << "答案是：" << a + c << endl;
			break;
		case '-':
			cout << "答案是：" << a - c << endl;
			break;
		case '*':
			cout << "答案是：" << a * c << endl;
			break;
		case '/':
			if (c == 0) cout << "除数不能为0！" << endl;
			else cout << "答案是：" << a / c << endl;
			break;
		case '%': 
			int d = static_cast<int>(a);
			int e = static_cast<int>(c);
			if (e == 0) cout << "除数不能为大于0小于1的实数！" << endl;
			else cout << "答案是：" << d % e << endl;
			break;

	}










	return 0;
}
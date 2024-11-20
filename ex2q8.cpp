#include<iostream>
using namespace std;
int main()
{
	cout << "这个程序可以求正数的平方根，请输入一个正数：" << endl;
	double a,b,c;
	cin >> a;
	if (a < 0) {
		cout << "你输入了负数！" << endl; 
	}
	else {
		if (a == 0) cout << 0 << endl;
		else {
			b = a;
			c = -1;
			for (1; c - b >= 0.00001 || b - c >= 0.00001; b = b)
			{
				c = b; 
				b = 0.5 * (b + a / b);
			}
			cout << b << endl;

		}


	}

	return 0;
}

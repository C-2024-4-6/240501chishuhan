#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个大于0小于10的实数" << endl;
	float x,y;
	cin >> x;
	if (x > 0 && x < 1) y = 3 - 2 * x;
	else
		if (x >= 1 && x < 5) y = 2 / (4 * x) + 1;
		else
			if (x >= 5 && x < 10) y = x * x;
	cout << y << endl;







	system("pause");
	return 0;
}
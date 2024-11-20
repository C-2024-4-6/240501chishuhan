#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形三条边的边长:" << endl;
	cin >> a>> b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		float C;
		C = a + b + c;
		cout << "三角形的周长为：" << C << endl;
		if (a == b || b == c || c == a)
			cout << "您输入的三角形是等腰三角形" << endl;

	}
	else cout << "你输入的三条边无法组成三角形！" << endl;




	

	return 0;
}
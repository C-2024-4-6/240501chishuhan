#include<iostream>
using namespace std;
int main()
{
	float huashidu;//华氏度=32+摄氏度*1.8
	cin >> huashidu;
	float a = (huashidu - 32) / 1.8;
	float b = a * 100;
	int c = int(b);
	float d = float(c);
	float e = d / 100;
	cout << "您输入的华氏温度对应的摄氏温度是" << e << endl;




	return 0;
}
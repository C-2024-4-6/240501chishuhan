#include<iostream>
using namespace std;
int main()
{
	float huashidu;//���϶�=32+���϶�*1.8
	cin >> huashidu;
	float a = (huashidu - 32) / 1.8;
	float b = a * 100;
	int c = int(b);
	float d = float(c);
	float e = d / 100;
	cout << "������Ļ����¶ȶ�Ӧ�������¶���" << e << endl;




	return 0;
}
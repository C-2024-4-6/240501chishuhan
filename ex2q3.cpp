#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������������ߵı߳�:" << endl;
	cin >> a>> b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		float C;
		C = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << C << endl;
		if (a == b || b == c || c == a)
			cout << "��������������ǵ���������" << endl;

	}
	else cout << "��������������޷���������Σ�" << endl;




	

	return 0;
}
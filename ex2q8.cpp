#include<iostream>
using namespace std;
int main()
{
	cout << "������������������ƽ������������һ��������" << endl;
	double a,b,c;
	cin >> a;
	if (a < 0) {
		cout << "�������˸�����" << endl; 
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

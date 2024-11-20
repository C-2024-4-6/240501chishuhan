#include<iostream>
using namespace std;
int main()
{
	char zifu;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> zifu;
	int a;
	a = static_cast<int> (zifu);
	if (a>= 97 && a<= 122)
	{
		char b = static_cast<char>(a - 32);
		cout << b << endl;
	}
	else cout << a + 1 << endl;









	return 0;
}
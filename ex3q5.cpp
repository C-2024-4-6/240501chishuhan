#include<iostream>
using namespace std;

int taozi(int a)
{
	int t;
	if (a == 10) t = 1;
	else t = (1 + taozi(a +1)) * 2;
	return t;
}


int main()
{
	cout << "第一天猴子共摘了"<<taozi(0) <<"个桃子。" << endl;

	return 0;
}
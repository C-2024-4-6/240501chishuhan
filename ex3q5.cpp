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
	cout << "��һ����ӹ�ժ��"<<taozi(0) <<"�����ӡ�" << endl;

	return 0;
}
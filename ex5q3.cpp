#include<iostream>
using namespace std;
class ChangFangTi
{
public:
	float length;
	float width;
	float height;
	void shurushuju()
	{
		cout << "�����볤����ĳ���";
		cin >> length;
		cout << "�����볤����Ŀ�";
		cin >> width;
		cout << "�����볤����ĸߣ�";
		cin >> height;
	}
	void tiji()
	{
		cout << "����������Ϊ��" << length * width * height << endl;
	}
};
int main()
{
	ChangFangTi cft1;
	ChangFangTi cft2;
	ChangFangTi cft3;
	cout << "��һ��������" << endl;
	cft1.shurushuju();
	cft1.tiji();
	cout << "�ڶ���������" << endl;
	cft2.shurushuju();
	cft2.tiji();
	cout << "������������" << endl;
	cft3.shurushuju();
	cft3.tiji();
	return 0;
}
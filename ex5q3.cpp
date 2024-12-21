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
		cout << "请输入长方体的长：";
		cin >> length;
		cout << "请输入长方体的宽：";
		cin >> width;
		cout << "请输入长方体的高：";
		cin >> height;
	}
	void tiji()
	{
		cout << "长方体的体积为：" << length * width * height << endl;
	}
};
int main()
{
	ChangFangTi cft1;
	ChangFangTi cft2;
	ChangFangTi cft3;
	cout << "第一个长方体" << endl;
	cft1.shurushuju();
	cft1.tiji();
	cout << "第二个长方体" << endl;
	cft2.shurushuju();
	cft2.tiji();
	cout << "第三个长方体" << endl;
	cft3.shurushuju();
	cft3.tiji();
	return 0;
}
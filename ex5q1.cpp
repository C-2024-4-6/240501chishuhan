#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void cintime()
	{
		cout << "请输入小时：" ;
		cin >> hour;
		cout << "请输入分钟：";
		cin >> minute;
		cout << "请输入秒：";
		cin >> sec;
	}
	void couttime()
	{
		cout <<"现在的时间为" << hour << ":" << minute << ":" << sec << endl;
	}
};

int main()
{
	Time t1;
	t1.cintime();
	t1.couttime();

	return 0;
}
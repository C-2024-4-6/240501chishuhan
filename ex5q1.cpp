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
		cout << "������Сʱ��" ;
		cin >> hour;
		cout << "��������ӣ�";
		cin >> minute;
		cout << "�������룺";
		cin >> sec;
	}
	void couttime()
	{
		cout <<"���ڵ�ʱ��Ϊ" << hour << ":" << minute << ":" << sec << endl;
	}
};

int main()
{
	Time t1;
	t1.cintime();
	t1.couttime();

	return 0;
}
#include<iostream>
using namespace std;
class Point
{
public:
	float x=60;
	float y=80;
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "�õ������Ϊ����" << x << "��" << y << "��" << endl;
	}
};
int main()
{
	Point point1;
	point1.display();
	int a, b;
	cout << "������������x����仯��ֵ��" << endl;
	cin >> a;
	cout << "������������y����仯��ֵ��" << endl; 
	cin >> b;
	point1.setPoint(a, b);
	point1.display();

	return 0;
}
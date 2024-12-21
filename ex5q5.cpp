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
		cout << "该点的坐标为：（" << x << "，" << y << "）" << endl;
	}
};
int main()
{
	Point point1;
	point1.display();
	int a, b;
	cout << "请输入你想让x坐标变化的值：" << endl;
	cin >> a;
	cout << "请输入你想让y坐标变化的值：" << endl; 
	cin >> b;
	point1.setPoint(a, b);
	point1.display();

	return 0;
}
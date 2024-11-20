#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		int j = i;
		do {
			cout << "*";
			j--;
		} while (j > 0);
		cout << endl;
	}








	return 0;
}
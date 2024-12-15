#include <iostream>
using namespace std;


int main()
{
    int numbers[10];
    int size = 0;


    for (int i = 0; i < 10; i++)
    {
        // Read and store numbers in an array if it is new
        cout << "Enter an integer: ";
        int value;
        cin >> value;


        bool isInArray = false; //引入了一个可以改变的布尔变量，用于判断第一个数自动输入数组里面


        for (int j = 0; j < size; j++)
            if (*(numbers + j) == value)
            {
                isInArray = true;
                break;
            }



        if (!isInArray)
        {
            *(numbers + size) = value;
            size++;
        }
    }


    for (int i = 0; i < size; i++)
        cout << *(numbers + i) << " ";


    return 0;
}
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


        bool isInArray = false; //������һ�����Ըı�Ĳ��������������жϵ�һ�����Զ�������������


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
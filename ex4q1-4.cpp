#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int current1 = 0; // Current index in list1
    int current2 = 0; // Current index in list2
    int current3 = 0; // Current index in list3

    while (current1 < size1 && current2 < size2) {
        if (list1[current1] < list2[current2])
            list3[current3++] = list1[current1++];
        else
            list3[current3++] = list2[current2++];
    }

    while (current1 < size1)
        list3[current3++] = list1[current1++];

    while (current2 < size2)
        list3[current3++] = list2[current2++];
}

int main() {
    const int MAX_SIZE = 80;

    cout << "Enter list1: ";
    int list1[MAX_SIZE];
    int size1;
    cin >> size1;
    for (int i = 0; i < size1; i++)
        cin >> list1[i];

    cout << "Enter list2: ";
    int list2[MAX_SIZE];
    int size2;
    cin >> size2;
    for (int i = 0; i < size2; i++)
        cin >> list2[i];

    int list3[2 * MAX_SIZE];
    merge(list1, size1, list2, size2, list3);

    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++)
        cout << list3[i] << " ";

    return 0;
}

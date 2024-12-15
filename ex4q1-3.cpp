#include<iostream>
using namespace std;

bool a(bool n)
{
    return !n;  
}

int main() {
    bool store[100];
    for (int i = 0; i < 100; i++)
        store[i] = false;

    int n = 1;
    while (n <= 100) {
        for (int i = 0; i < 100; i++) {
            if ((i + 1) % n == 0)
                store[i] = a(store[i]);
        }
        n++;
    }

    for (int i = 0; i < 100; i++) {
        if (store[i])
            cout << "L" << i + 1 << " ";
    }

    return 0;
}

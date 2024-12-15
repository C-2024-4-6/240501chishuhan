#include<iostream>
#include<cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
    int remainingLength = strlen(s2);
    int startingIndex = 0;

    while (strlen(s1) <= remainingLength) {

        bool matched = true;
        for (int i = 0; i < strlen(s1); i++) {
            if (s1[i] != s2[startingIndex + i]) {
                startingIndex++;
                remainingLength--;
                matched = false;
            }
        }

        if (matched) return startingIndex;
    }

    return -1;
}

int main() {
    cout << "Enter the first string: ";
    char s1[80];
    cin.getline(s1, 80);

    cout << "Enter the second string: ";
    char s2[80];
    cin.getline(s2, 80);

    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

    return 0;
}

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]);
        if (isalpha(c))
            counts[c - 'a']++;
    }
}

int main() {
    char s[80];
    cout << "Enter a string: ";
    cin.getline(s, 80);

    int counts[26] = { 0 };

    count(s, counts);

    for (int i = 0; i < 26; i++)
        if (counts[i] > 0)
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;

    return 0;
}

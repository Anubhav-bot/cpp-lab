#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter two strings: ";
    getline(cin, s1);
    getline(cin, s2);
    int res = strcmp(s1.c_str(), s2.c_str());
    if (res == 0) {
        cout << "The strings are equal." << endl;
    } else if (res < 0) {
        cout << "The first string is smaller." << endl;
    } else {
        cout << "The second string is smaller." << endl;
    }
    return 0;
}


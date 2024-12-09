#include<iostream>
#include<string>
using namespace std;

//wap to find reverse of string

int main() {
    cout << "By Anubhav Paudel" << endl;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    cout << "Reversed string: " << s << endl;

    return 0;
}

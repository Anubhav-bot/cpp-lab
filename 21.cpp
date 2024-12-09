#include<iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int main() {
    int n;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square of " << n << " is " << square(n) << endl;
    return 0;
}

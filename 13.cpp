#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for (int i = n; i > 0; i--) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}

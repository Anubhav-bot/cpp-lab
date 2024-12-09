//wap to check whether a given number is prime or not
//
#include<iostream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    int i, n;
    int prime = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    if (prime == 1) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}

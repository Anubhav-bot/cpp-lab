#include<iostream>
using namespace std;

//sum of n natural numbers using for loop

int main() {
    cout << "By Anubhav Paudel" << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum of " << n << " natural numbers is " << sum << endl;
    return 0;
}

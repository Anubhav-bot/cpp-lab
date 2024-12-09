//wap to reverse a given number
//
#include<iostream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rev = 0;
    int temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    cout << "Reverse of " << num << " is " << rev << endl;
    return 0;
}

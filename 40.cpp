#include<iostream>
using namespace std;

//wap to check if a number is palindrome or not
//
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
    if (rev == num) {
        cout << num << " is a palindrome number" << endl;
    }
    else {
        cout << num << " is not a palindrome number" << endl;
    }
    return 0;
}


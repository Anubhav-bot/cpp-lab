//wap to add two numbers using function
//
#include<iostream>
using namespace std;

int add(int num, int num1) {
    return num + num1;
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    int num, num1;
    cout << "Enter two numbers: ";
    cin >> num >> num1;
    cout << "Sum: " << add(num, num1) << endl;
    return 0;
}

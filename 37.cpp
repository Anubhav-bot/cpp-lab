#include<iostream>
#include <ratio>
using namespace std;

//wap using switch case to add, subtract, multiply and divite two numbers
int main() {
    cout << "By Anubhav Paudel" << endl;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    char ch;
    cout << "Enter operator (+, -, *, /): ";
    cin >> ch;
    

    switch (ch) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }
    return 0;
}

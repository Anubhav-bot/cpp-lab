#include<iostream>
using namespace std;

int main() {
    int a, b;
    int *p = &a;
    int *q = &b;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    *p = *p + *q;
    cout << "Sum of " << *p << " and " << *q << " is " << *p + *q << endl;
    return 0;
}

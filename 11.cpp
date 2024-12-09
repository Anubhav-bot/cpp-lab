#include<iostream>
using namespace std;

int area(int l, int b) {
    return l * b;
}

int area(int l) {
    return l * l;
}

int main() {
    int l, b;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    cout << "Area of Rectangle is " << area(l, b) << endl;
    cout << "Area of Square is " << area(l) << endl;
    return 0;
}

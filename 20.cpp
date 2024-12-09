#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    swap(&a, &b);
    cout << "After swapping: " << a << " and " << b << endl;
    return 0;
}

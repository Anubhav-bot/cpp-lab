#include<iostream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    int n, i=0;
    cout << "Enter a num: ";
    cin >> n;

    int a=0, b=1;
    cout << "Fibonacci series upto " << n << ": ";
    while(i < n) {
        b = a + b;
        a = b - a;
        cout << a << " ";
        i++;
    }
    return 0;
}

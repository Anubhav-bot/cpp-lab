#include<iostream>
#include<iomanip>
using namespace std;

//wap to demonstrate endl and setw

int main() {
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << setw(10) << n << endl;
    
    return 0;
}

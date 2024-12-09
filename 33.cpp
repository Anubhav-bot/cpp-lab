#include<iostream>
using namespace std;

int safeDivide(int a, int b) {
    if (b == 0) {
        throw "Divide by zero error";
    }
    return a / b;
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    int a = 10, b = 0;
    
    try {
        int c = safeDivide(a, b);
        cout << c << endl;
    }
    catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }
    
    return 0;
}

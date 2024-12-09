#include<iostream>
#include <ostream>
using namespace std;

class Complex {
    public:
        int real;
        int imaginary;

        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }
};

ostream& operator<<(ostream& out_stream, const Complex& c) {
    out_stream << c.real;

    out_stream << (c.imaginary >= 0? "+" : "") << c.imaginary << "i";
    return out_stream;
}

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex res(c1.real + c2.real, c1.imaginary + c2.imaginary);
    return res;
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    Complex c1(3, 5);
    Complex c2(-4, -7);
    cout << c1 << " + " << c2 << " = " << c1 + c2;
    return 0;
}

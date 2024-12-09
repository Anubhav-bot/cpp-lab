//wap to add two numbers using class 

#include<iostream>
using namespace std;

class Number {
    public:
        int value;
        Number(int num) {
            value = num;
        }
        friend int add(const Number& num, const Number& num1);
};

int add(const Number& num, const Number& num1) {
    return num.value + num1.value;
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    Number num(20);
    Number num1(30);
    cout << "Sum: " << add(num, num1) << endl;
    return 0;
}

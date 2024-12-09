#include<iostream>
using namespace std;
//wap to invoke derived class memeber using base class pointer

class Base {
    public:
        int x;
        virtual void display() {
            cout << "X::display() is called" << endl;
        }
};

class Derived : public Base {
    public:
        int y;
        void display() override {
            cout << "Y::display() is called" << endl;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Base *base_ptr;
    base_ptr = new Base;
    base_ptr->display();
    base_ptr = new Derived;
    base_ptr->display();
    return 0;
}

//wap to demonstrate simple inheritance
#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound() = 0;
};

class Dog : public Animal {
    public:
        void makeSound() {
            cout << "Woof!" << endl;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Animal *a = new Dog();
    a->makeSound();
    return 0;
}

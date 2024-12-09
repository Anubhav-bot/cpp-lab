//wap to display employee information using multiple inheritance

#include<iostream>
using namespace std;

class Entity {
    public:
        virtual void displayInfo() = 0;
};

class Person {
    public:
        virtual void speak() = 0;
};

class Employee : public Entity, public Person {
    private:
        string name;
        int age;
    public:
        Employee(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        void speak() {
            cout << "Hello" << endl;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Employee e("Anubhav", 25);
    e.displayInfo();
    e.speak();
    return 0;
}

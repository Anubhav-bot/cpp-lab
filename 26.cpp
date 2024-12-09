#include<iostream>
using namespace std;

class Person {
    public:
        virtual void setInfo() = 0;
};

class Employee : public Person {
    public:
        virtual void getInfo() = 0;
};

class Manager : public Employee {
    private:
        string name;
        int age;
    public:
        void setInfo() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};


int main() {
    cout << "By Anubhav Paudel" << endl;
    Manager m;
    m.setInfo();
    m.getInfo();
    return 0;
}

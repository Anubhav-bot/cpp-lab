#include<iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string frnd;
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Friend: " << frnd << endl;
        }
        
        friend void makeFriend(Person &p1, Person &p2);

};

void makeFriend(Person &p1, Person &p2) {
    p1.frnd = p2.name;
    p2.frnd = p1.name;
}


int main() {
    cout << "By Anubhav Paudel" << endl;
    Person p1("Anubhav", 25);
    Person p2("Rahul", 22);
    makeFriend(p1, p2);
    p1.displayInfo();
    p2.displayInfo();
    return 0;
}

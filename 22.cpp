#include<iostream>
#include<string>
using namespace std;

class Person {
    private:
        int age;
        string name;
    public:
        Person(int age, string name) {
            this->age = age;
            this->name = name;
        }

        string getName() {
            return name;
        }

        ~Person() {
            cout << "Person destructor called" << endl;
        }
};

int main() {
    Person p(25, "Anubhav");
    cout << "Person " << p.getName()<< " created" << endl;
    return 0;
}

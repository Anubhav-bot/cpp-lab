#include<iostream>
using namespace std;

//wap to accept and display employee details using structures

struct Employee {
    string name;
    int age;
    string address;
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Employee e1;
    e1.name = "Anubhav";
    e1.age = 25;
    e1.address = "KTM";
    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Address: " << e1.address << endl;
    
    return 0;
}

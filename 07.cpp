
//wap to accept and display the detail sof a employee using class 

#include<iostream>
using namespace std;
class Employee {
    private:
        char name[20];
        int empId;
    public:
        void set_info() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter employee id: ";
            cin >> empId;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Employee id: " << empId << endl;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Employee emp;
    emp.set_info();
    emp.display();
    return 0;
}

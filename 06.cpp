//wap to accept and display the detail sof a student using class 
//
//
#include<iostream>
using namespace std;
class Student {
    private:
        char name[20];
        int roll;
    public:
        void set_info() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> roll;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll number: " << roll << endl;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Student stu;
    stu.set_info();
    stu.display();
    return 0;
}

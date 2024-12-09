#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        int marks[5];
        int total;
        int tmax;

        void assign(string n, int marks[], int t) {
            name = n;
            for (int i = 0; i < 5; i++) {
                this->marks[i] = marks[i];
            }
            tmax = t;
        }

        void compute() {

            total = 0;
            for (int i = 0; i < 5; i++) {
                total += marks[i];
            }

            int avg = total / 5;

            cout << "Total: " << total << endl;
            cout << "Average: " << avg << endl;
        }

        void display() {
            cout << "Name: " << name << endl;
            for (int i = 0; i < 5; i++) {
                cout << "Marks: " << marks[i] << endl;
            }
            cout << "Total: " << total << endl;
            cout << "Average: " << total / 5 << endl;
            cout << "Max: " << tmax << endl;
        }
        
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    int marks1[5] = {90, 85, 75, 60, 95};
    Student s1;
    s1.assign("John", marks1, 100);
    s1.compute();
    return 0;
}

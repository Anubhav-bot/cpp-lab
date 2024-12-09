#include <iostream>
using namespace std;

class B;

class A {
    private:
        int a_value;

    public:
        A(int value) : a_value(value) {}

        friend void showPrivateMembers(A objA, B objB);

        friend class B;
};


class B {
    private:
        int b_value;

    public:
        B(int value) : b_value(value) {}

        friend void showPrivateMembers(A objA, B objB);

        void displayFromA(A objA) {
            cout << "Accessing private member of A from B: " << objA.a_value << endl;
        }
};


void showPrivateMembers(A objA, B objB) {
    cout << "A's private member: " << objA.a_value << endl;
    cout << "B's private member: " << objB.b_value << endl;
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    A objA(10);
    B objB(20);

    showPrivateMembers(objA, objB);
    objB.displayFromA(objA);

    return 0;
}

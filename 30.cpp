#include<iostream>
using namespace std;

class Account {
    private:
        int balance;
    public:
        Account(int balance) {
            this->balance = balance;
        }

        void deposit(int amount) {
            balance += amount;
        }

        void withdraw(int amount) {
            balance -= amount;
        }

        int getBalance() {
            return balance;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Account a(1000);
    a.deposit(200);
    a.withdraw(500);
    cout << "Balance: " << a.getBalance() << endl;
    return 0;
}

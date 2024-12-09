//wap to check wheter a given year is  a leap year or not
//
#include<iostream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        cout << y << " is a leap year" << endl;
    }
    else {
        cout << y << " is not a leap year" << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

class Shape {
    public:
        int a, b;
        //area of rectangle and triangle using polymorphism

        float area(int x, int y) {
            return x * y;
        }
        float area(int x, int y, int z) {
            return (x + y) / 2.0;
        }

};

int main() {
    cout << "By Anubhav Paudel" << endl;
    Shape s;
    cout << "Area of rectangle: " << s.area(5, 10) << endl;
    cout << "Area of triangle: " << s.area(5, 10, 2) << endl;
    return 0;
}

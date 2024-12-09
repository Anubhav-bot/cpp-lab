//wap to calculate volume of cube, cylinder and rectangle using function overloading

#include<iostream>
using namespace std;

double volume(double side) {
    return side * side * side;
}

double volume(double radius, double height) {
    return 3.14 * radius * radius * height;
}

double volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double side, radius, length, width, height;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter side: ";
    cin >> side;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter length, width and height: ";
    cin >> length >> width >> height;

    cout << "Volume of cube is: " << volume(side) << endl;
    cout << "Volume of cylinder is: " << volume(radius, height) << endl;
    cout << "Volume of rectangle is: " << volume(length, width, height) << endl;
    return 0;
}

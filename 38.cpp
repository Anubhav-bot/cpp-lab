#include<iostream>
using namespace std;

//wap to demonstrate dynamic memory allocation 

int main() {
    cout << "By Anubhav Paudel" << endl;
    int *ptr;
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    ptr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " element: ";
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    delete[] ptr;

    return 0;
}

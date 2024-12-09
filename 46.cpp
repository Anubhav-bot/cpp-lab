#include<iostream>
using namespace std;

//wap using templates to sort the given list of elements    

template <typename T>
void sort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    sort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

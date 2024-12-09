#include<iostream>
using namespace std;

template <typename T>
void sort(T arr[], int l) {
    for (int i = 0; i < l - 1; i++) {
        for (int j = 0; j < l - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    cout << "By Anubhav Paudel" << endl;
    int arr[7] = { 3, 72, 9, 19, 1, 0, 64 };
    sort(arr, 7);
    cout << "Sorted array: \n";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nLargest element: " << arr[6] << endl;
    cout << "Smallest element: " << arr[0] << endl;
    return 0;
}

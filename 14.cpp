#include<iostream>
using namespace std;

int main() {
    int arr[10] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search;
    cout << "By Anubhav Paudel" << endl;
    cout << "Enter a number: ";
    cin >> search;

    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == search) {
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if (arr[mid] > search) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (low > high) {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}

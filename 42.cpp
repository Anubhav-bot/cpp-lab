#include<iostream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    int arr[5] = {2, 4, 7, 12, 15};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum << endl;
    return 0;
}

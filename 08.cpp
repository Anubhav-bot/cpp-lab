//wap to count number of words and characters in a given text
#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    cout << "Enter a text: ";
    getline(cin, t);
    int words = 0, chars = 0;
    for (int i = 0; i < (int)t.length(); i++) {
        if (t[i] != ' ') {
            chars++;
        }
        if ((i == 0 && t[i] != ' ') || (t[i] != ' ' && t[i-1] == ' ')) {
            words++;
        }
    }
    cout << "Number of words: " << words << endl;
    cout << "Number of characters: " << chars << endl;
    return 0;
}

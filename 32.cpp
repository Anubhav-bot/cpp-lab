#include<iostream>
#include<cstring>
using namespace std;

//wap to overload + to perform concatenation

class String {
    private:
        char *str;
    public:
        String(char *str) {
            this->str = str;
        }

        String operator+(String s) {
            char *temp = new char[strlen(str) + strlen(s.str) + 1];
            strcpy(temp, str);
            strcat(temp, s.str);
            return String(temp);
        }

        char *getStr() {
            return str;
        }
};

int main() {
    cout << "By Anubhav Paudel" << endl;
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;
    cout << s3.getStr() << endl;
    return 0;
}

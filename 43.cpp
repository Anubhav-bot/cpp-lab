#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "By Anubhav Paudel" << endl;
    ofstream out("source.txt");
    out << "Hello, File!";  // Write to file
    out.close();

    ifstream in("source.txt");
    ofstream copy("copy.txt");
    copy << in.rdbuf();     // Copy file content
    in.close();
    copy.close();

    cout << "File written and copied!\n";
    return 0;
}

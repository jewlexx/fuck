#include <iostream>
#include <fstream>

using namespace std;

// Takes an input size from the user and writes a text file with that size
int main() {
    int size, i = 0;
    ofstream file;

    cout << "Enter your desired file size (kb): ";
    cin >> size;

    file.open("file");
    while (i < size) {
        file << "a";
        i++;
    }
    file.close();

    return 0;
}
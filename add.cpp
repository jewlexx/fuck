#include <iostream>

using namespace std;

int main() {
    int num;
    char c;
    bool a = true;

    while (a) {
        cout << "Enter a number: ";
        cin >> num;

        cout << num * 2 << endl;

        cout << "Continue? (y/n) ";
        cin >> c;

        if (c ==  'y') {
            a = true;
        } else {
            a = false;
        }
    }

    return 0;
}
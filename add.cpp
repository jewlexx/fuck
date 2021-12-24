#include <iostream>

using namespace std;

int main() {
    bool a = true;

    while (a) {
        cout << "Enter a number: ";
        int num;
        cin >> num;

        cout << num * 2 << endl;

        cout << "Continue? (y/n) ";
        char c;
        cin >> c;

        if (c ==  'y') {
            a = true;
        } else {
            a = false;
        }
    }

    return 0;
}
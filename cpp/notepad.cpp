#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fileWrite("test.txt");
    ifstream fileRead("test.txt");

    string buffer;
    fileRead >> buffer;

    cout << buffer;

    fileWrite.close();
    fileRead.close();
    return 0;
}
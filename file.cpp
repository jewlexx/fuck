#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void nStr(int size, char *outStr)
{
    char str[size];

    for (int i = 0; i < size; ++i)
    {
        outStr[i] = str[i];
    }
};

// Takes an input size from the user and writes a text file with that size
int main()
{
    char mb[1024 * 1024];
    nStr(1024 * 1024, mb);

    cout << "Enter your desired file size (bytes): ";
    int size;
    string sizeInput;
    getline(cin, sizeInput);
    size = stoi(sizeInput);

    cout << "Enter your desired file name (file): ";
    string fileName;
    getline(cin, fileName);
    if (fileName.empty())
    {
        fileName = "file";
    }

    cout << "Made it here" << endl;

    int remI = remainder(size, (1024 * 1024));
    char rem[remI];
    cout << remI;
    nStr(remI, rem);

    cout << rem;

    ofstream file;

    file.open(fileName);

    int i = 0;

    while (i < size / (1024 * 1024))
    {
        cout << "Doing hot girl shit";
        file << mb;
        i++;
    }

    file << rem;

    file.close();

    return 0;
}
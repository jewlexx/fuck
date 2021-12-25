#include <iostream>
#include <fstream>

using namespace std;

string str(int size)
{
    int i = 0;
    string s;
    while (i < size)
    {
        s += 'a';
        i++;
    }
    return s;
};

// Takes an input size from the user and writes a text file with that size
int main()
{
    string mb = str(1024 * 1024);

    cout << "Enter your desired file size (bytes): ";
    int size;
    cin >> size;

    cout << "Enter your desired file name (file): ";
    string fileName;
    if (fileName.empty())
    {
        fileName = "file";
    }
    else
    {
        cin >> fileName;
    }

    string rem = str(size % 1000000);
    size = size / 1000000;

    ofstream file;

    file.open(fileName);

    int i = 0;

    while (i < size)
    {
        file << mb;
        i++;
    }

    file << rem;

    file.close();

    return 0;
}
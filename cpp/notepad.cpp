#include <iostream>
#include <thread>

using namespace std;

void something(string to_print)
{
    while (true)
    {
        cout << to_print << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}

int main()
{
    int i = 0;
    while (i < 4)
    {

        thread obj(something, "something");

        obj.detach();
    }
}
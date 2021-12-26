#include <iostream>
#include <curses.h>

int main()
{
    char c;
    std::cout << "press esc to exit! " << std::endl;
    while (true)
    {
        c = getch();
        if (c == 27)
            break;
    }

    std::cout << "exited: " << std::endl;

    return 0;
}
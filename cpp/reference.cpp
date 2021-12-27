#include <iostream>

int main()
{
    int num1 = 5;

    int &num2 = num1;

    std::cout << num1 << " " << num2 << std::endl;

    num2 = 10;

    std::cout << num1 << " " << num2 << std::endl;
}

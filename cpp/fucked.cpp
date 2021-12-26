#include <iostream>

using namespace std;

int main()
{
    int guess = 0;
    int min = 0;
    int max = 10;
    srand(time(NULL));
    int random = rand() % (max - min + 1) + min;

    string inputMsg = "Enter a number between " + to_string(min) + " and " + to_string(max) + ": ";

    while (guess < 3)
    {
        int number;
        cout << inputMsg;
        string temp;
        getline(cin, temp);
        number = stoi(temp);

        if (number == random)
        {
            cout << "You guessed the number! YOU WIN!!!" << endl;
            return 0;
        }
        else if (number > random)
        {
            cout << "Your number is too high!" << endl;
        }
        else
        {
            cout << "Your number is too low!" << endl;
        }

        guess += 1;
    }

    cout << "You have guessed the number wrong 3 times. Game over. It was " << random << endl;

    return 0;
}
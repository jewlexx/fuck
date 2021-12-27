#include <iostream>

using namespace std;

int main()
{
    string answers[20] = {"It is certain.", "It is decidedly so.", "Without a doubt.", "Yes definitely.", "You may rely on it.", "As I see it yes.", "Most likely.", "Outlook good.", "Yes.", "Signs point to yes.", "Reply hazy try again.", "Ask again later.", "Better not tell you now.", "Cannot predict now.", "Concentrate and ask again.", "Don't count on it.", "My reply is no.", "My sources say no.", "Outlook not so good.", "Very doubtful."};

    cout << "Enter a question: ";
    string question;
    getline(cin, question);
    question.clear();

    srand(time(NULL));
    int answer = rand() % 20;

    cout << "The answer is: " << answers[answer] << endl;

    return 0;
}
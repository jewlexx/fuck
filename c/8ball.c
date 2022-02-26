#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

const char *ANSWERS[20] = {"It is certain.", "It is decidedly so.", "Without a doubt.", "Yes definitely.", "You may rely on it.", "As I see it yes.", "Most likely.", "Outlook good.", "Yes.", "Signs point to yes.", "Reply hazy try again.", "Ask again later.", "Better not tell you now.", "Cannot predict now.", "Concentrate and ask again.", "Don't count on it.", "My reply is no.", "My sources say no.", "Outlook not so good.", "Very doubtful."};

int main(void)
{
    printf("Please enter your question: ");
    getchar();

    srand((unsigned)time(NULL));
    int answer_index = rand() % 20;

    printf("Divining your answer...");
    fflush(stdout);
    sleep(rand() % 5);

    // Clears the last line
    printf("\33[2K\r");

    printf("\r%s\n", ANSWERS[answer_index]);
}
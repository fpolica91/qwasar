#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>

bool is_number(char *numeric)
{
    return atoi(numeric) > 0;
}

bool compare_strings(char *user_input, char *code)
{
    if (strlen(user_input) > 4)
        return 0;
    int comp = strcmp(user_input, code);
    int misplaced = 0;
    int inplace = 0;
    for (int i = 0; i < strlen(code); i++)
    {
        if (code[i] == user_input[i])
        {
            inplace++;
        }
        else
        {
            for (int j = 0; j < strlen(code); j++)
            {
                if (user_input[j] == code[i])
                    misplaced++;
            }
        }
    }

    if (inplace == 4)
    {
        return 1;
    }

    if (comp == 0)
    {
        return 1;
    }

    printf("Well placed pieces: %d\n", inplace);
    printf("Misplaced pieces: %d\n", misplaced);

    return EXIT_FAILURE;
}

int main(int argc, char **argv)
{
    char *user_input = NULL;
    char *guesses_allowed = NULL;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-c") == 0 && i + 1 < argc)
        {
            if (argv[i + 1] == NULL)
                continue;
            if (is_number(argv[i + 1]) && strlen(argv[i + 1]) == 4)
            {
                user_input = argv[i + 1];
            }
        }

        if (strcmp(argv[i], "-t") == 0)
        {
            if (argv[i + 1] == NULL)
                continue;
            if (is_number(argv[i + 1]))
            {
                guesses_allowed = argv[i + 1];
            }
        }
    }

    printf("Will you find the secret code?\n");
    char *input_to_use;
    int numAttemps = guesses_allowed != NULL ? atoi(guesses_allowed) : 10;
    srand(time(NULL));
    if (user_input == NULL)
    {
        input_to_use = malloc(4 * sizeof(char));
        for (int i = 0; i < 4; i++)
        {
            int r = (rand() % 10);
            input_to_use[i] = r + '0';
        }
    }
    else
    {
        input_to_use = user_input;
    }

    printf("Please enter a valid guess\n");
    int rnd = 0;
    bool flag = 0;
    // attemps
    while (numAttemps--)
    {
        char buff[200];
        size_t bytes_size = sizeof(buff);
        printf("Round %d \n", rnd);
        rnd++;
        // if end of input
        size_t eof;
        // is false until user input is correct and stored in use_guess;
        bool flag = false;
        char *user_guess;
        while (!flag)
        {
            eof = read(STDIN_FILENO, buff, bytes_size);
            if (eof == 0)
            {
                return 0;
            }
            // user_guess updated to the value of buffer
            user_guess = buff;
            //  if atoi === 0 wrong input
            if (atoi(user_guess) == 0)
            {
                printf("Wrong input! \n");
                continue;
            }
            // user input was right;
            user_guess[4] = '\0';
            flag = atoi(user_guess) != 0;
            // printf("%s", user_guess);
        }
        bool ans = compare_strings(user_guess, input_to_use);

        if (ans > 0)
        {
            printf("Congratz! You did it!\n");
            numAttemps = 0;
        }
        // check if strings are equal
    }
    // attemps
}
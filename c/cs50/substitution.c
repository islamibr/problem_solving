#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

//my token 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
// return 1 for closing program and 0 to contniue
int main(int argc, string argv[])
{
    // key must be one word
    if (argc != 2)
    {
        printf("Please, Enter KEY\n");
        return 1;
    }
    // if it one word
    else
    {
        int containNum = 0;
        int containSP = 0;
        int doubled = 0;
        int n = strlen(argv[1]);
        //see if it contains numbers, spaces, repeated
        for (int i = 0; i < n; i++)
        {
            //numbers
            for (int j = 0; j <= 10; j++)
            {
                char c = '0' + j;
                if (argv[1][i] == c)
                {
                    containNum = 1;
                    break;
                }
            }
            //repeated
            for (int j = 0; j <= n; j++)
            {
                if (argv[1][i] == argv[1][j] && i != j)
                {
                    doubled = 1;
                    break;
                }
            }
            //spaces
            if (argv[1][i] == ' ')
            {
                containSP = 1;
                break;
            }

        }
        //if contains numbers
        if (containNum == 1)
        {
            printf("Please, KEY must not contain numbers\n");
            return 1;
        }
        //if it less than 26
        else if (n != 26)
        {
            printf("Please, KEY must be 26\n");
            return 1;
        }
        //if contains spaces
        else if (containSP == 1)
        {
            printf("Please, KEY must not contain spaces\n");
            return 1;
        }
        //if contains repeated
        else if (doubled == 1)
        {
            printf("Please, KEY must not contain repeated items\n");
            return 1;
        }
        //everthing is okay
        else
        {
        string input = get_string("plaintext: ");
        //convert
        for (int i = 0; i < strlen(input); i++)
        {
            //for uppercase
            if (isupper(input[i]))
            {
                input[i] = argv[1][input[i] - 'A'];
                // make sure it upper
                input[i] = toupper(input[i]);
            }
            //for lowercase
            else if (islower(input[i]))
            {
                input[i] = argv[1][input[i] - 'a'];
                //make sure it lower
                input[i] = tolower(input[i]);
            }
            //doing nothing if it is not a char
        }
        //results
        printf("ciphertext: %s\n", input);
        return 0;
        }
    }
}

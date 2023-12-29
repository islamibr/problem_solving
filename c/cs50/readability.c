#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//initial counters
int words = 1, sentences = 0, letters = 0;

int main(void)
{
    // get string
    string input = get_string("Text: ");
    // loop to count
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        // count letters
       if (isalpha(input[i]))
       {
           letters++;
       }
       // count words
       else if (input[i] == ' ')
       {
           words++;
       }
       // count sentences
       else if (input[i] == '.' || input[i] == '!' || input[i] == '?')
       {
           sentences++;
       }
    }

    // index equation
    int index = round(0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8);

    //printing
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Before Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

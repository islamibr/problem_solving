#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("right number: ");
    }
    while (x <= 0 || x > 8);

    for (int i = 0; i < x; i++)
    {
        // for first spaces
        for (int k = x - i - 1; k > 0; k--)
        {
            printf(" ");
        }

        // for decending #
        for (int j = 0; j <= i; j++)
        {dc
            printf("#");
        }

        // for constant mid space
        printf("  ");

        // for right side
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}

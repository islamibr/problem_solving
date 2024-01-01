#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, Petya, Vasya, Tonya, number = 0;
    scanf("%d", &n);
    while (n--)
    {
       scanf("%d", &Petya);
       scanf("%d", &Vasya);
       scanf("%d", &Tonya);
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    printf("%d", number);
    return 0;
}

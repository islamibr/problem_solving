#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, out = 0;
    char bit[4];
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%s", &bit);
        if (bit[1] == '+') out++; else if (bit[1] == '-') out--;
    }

    printf("%d", out);
}

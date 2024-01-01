#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[1000];
    scanf("%s", s1);
    if (s1[0] >= 97)
    {
        s1[0] -= 32;
    }
    printf("%s", s1);
}

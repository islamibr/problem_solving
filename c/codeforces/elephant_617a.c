#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int io;
    scanf("%d", &io);
    if (io % 5 == 0)
    {
        printf("%d", io/5);
    }
    else{
        printf("%d", io/5 + 1);
    }
}

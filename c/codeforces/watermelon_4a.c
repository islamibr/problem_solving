#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    do{
        scanf("%d", &w);
    }while (w <= 0);

    if (w % 2 == 0 && w > 2)
    {
        printf("YES");
    }
    else
    {
        printf ("NO");
    }

}

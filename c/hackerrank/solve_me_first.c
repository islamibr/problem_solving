#include<stdio.h>

int solveMeFirst(int x, int y)
{
    return x+y;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", solveMeFirst(x,y));
}

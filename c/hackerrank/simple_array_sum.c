#include<stdio.h>

int main()
{
    int x[1000], n, sum = 0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &x[i]);
        sum += x[i];
    }
    printf("%d", sum);
}

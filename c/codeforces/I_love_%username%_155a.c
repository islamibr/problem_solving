#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, best = INT_MIN, worst = INT_MAX, count = -2;
    scanf("%d", &n);
    int score[n];

    for (int i = 0; i<n; i++)
    {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i<n; i++)
    {
        if (score[i] < worst){
            worst = score[i];
            count++;
        }

        if (score[i] > best){
            best = score[i];
            count++;
        }
    }

    printf("%d", count);
}

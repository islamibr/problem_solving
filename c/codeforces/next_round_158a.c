#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int counter = 0, player_score[n];

    for (int i =0; i < n; i++)
    {
        scanf("%d", &player_score[i]);
    }
    for (int i =0; i < n; i++)
    {
        if (player_score[i] >= player_score[k-1] && player_score[i] > 0)
        {
            counter++;
        }

    }

    printf("%d", counter);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, sum = 0, min_capacity =  INT_MIN;
    scanf("%d", &n);

    if (n < 2) return 1;

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);

        if (a[i] > sum) return 1;

        sum = sum - a[i] + b[i];
        min_capacity = (sum > min_capacity) ? sum : min_capacity;
    }

    printf("%d\n", min_capacity);

    return 0;
}

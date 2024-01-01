#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int k, w, n, total = 0;
    scanf ("%d %d %d", &k, &w, &n);
    
    for (int i = 1; i <= n; i++)
    {
        total = total + k * i;
    }
    if (total - w > 0) printf("%d", total-w); else  printf("%d", 0);
 
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
        int i=0, j=n-1, max,k=0;
        int play1=0,play2=0;
        while(i<=j)
        {
            if(a[i]>=a[j])
            {
               max=a[i];
               i++;
            }
            else{
                max=a[j];
                j--;
            }
            if(k%2==0)
              play1=play1+max;
            else
              play2=play2+max;
         k++;
        }
        printf("%d %d",play1,play2);

}

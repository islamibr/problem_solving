#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int p[]={4,7,47,74,444,447,474,744,477,747,774};
    for(int i=0;i<11;i++)
        if(n%p[i]==0||n==p[i])
            flag=1;
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[200], s2[200]; long int asci1 = 0, asci2 = 0;
    scanf("%s%s", s1, s2);

     for(int i=0; i < strlen(s1);i++)
     {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        asci1 += s1[i], asci2 += s2[i];

        if (s1[i] == s2[i])
        {continue;}
        else if(s1[i] < s2[i])
        {printf("%d", -1); break;}
        else if (s1[i] > s2[i])
        {printf("%d", 1); break;}
     }
////        printf("%d\n%d\n", asci1, asci2);
        if (asci1 == asci2) printf("%d", 0);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,c,d;
     int year;
     scanf("%d", &year);
     
     while(1)
     {
         year++;
         a=year/1000;
         b=year/100%10;
         c=year/10%10;
         d=year%10;  
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
         {
             break;
         }
     }
     printf("%d", year);
}

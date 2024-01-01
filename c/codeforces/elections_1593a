#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int solveSingle(int best, int other1, int other2)
{
	return MAX(0, (MAX(other1, other2) + 1 - best));
}

int main()
{
	int t, a, b, c, m1,m2,m3;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d", &a,&b,&c);
		m1 = solveSingle(a, b, c);
		m2 = solveSingle(b, a, c);
		m3 = solveSingle(c, a, b);
        printf("%d %d %d\n", m1, m2, m3);
	}
}

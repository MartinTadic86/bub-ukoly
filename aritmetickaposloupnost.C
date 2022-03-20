#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include <math.h>


int an(int a1, int d, int n)
{
    return a1 + ((n - 1) * d);
}

void sdcj(int a1, int d, int n)
{
     sdcj(6, 9, 10);
    for (int a = a1; a <= an(a1, d, n); a += d)
    {
        printf("%s%d", a != a1 ? ". " : "", a);
    }
    printf("\n");
}

int main()
{
printf("%d\n", an(9, 1, 2));
    return 0;
}
#include<stdio.h>
#include <math.h>

int my_abs(int n)
{
    return abs(n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int res = my_abs(n);
    printf("%d", res);
    return 0;
}
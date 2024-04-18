#include <stdio.h>

int main()
{
    long long int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum +=i;
    }
    printf("%lld\n",sum);
    return 0;
}
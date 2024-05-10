#include <stdio.h>

long long int solve(int arr[], int n)
{
    if (n<=0) return 0;
    long long int sum = arr[n-1]+ solve(arr, n-1);
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int res = solve(arr, n);
    printf("%lld", res);
    return 0;
}
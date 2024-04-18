#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int pos_sum = 0;
    int neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            pos_sum += arr[i];
        }
        else
        {
            neg_sum += arr[i];
        }
    }
    printf("%d %d", pos_sum, neg_sum);

    return 0;
}

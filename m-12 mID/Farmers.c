#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        int arr[3];
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        int extra_days =  arr[2]- ((arr[0]*arr[2])/(arr[0]+arr[1]));
        printf("%d\n", extra_days);
    }

    return 0;
}
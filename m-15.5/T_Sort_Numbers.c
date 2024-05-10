#include <stdio.h>
int main()
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = arr[0], b = arr[1], c = arr[2];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    // PRINT
    for (int i = 0; i <n ; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n%d\n%d\n%d", a,b,c);

    return 0;
}
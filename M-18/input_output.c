#include <stdio.h>
int main()
{
    int a[5][3];
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", i);
        for (int j = 0; j < 3; j++)
        {
            // printf("a[%d]a[%d] ", i, j);
            scanf("%d ", &a[i][j]);
        }
        // printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", i);
        for (int j = 0; j < 3; j++)
        {
            // printf("a[%d]a[%d] ", i, j);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
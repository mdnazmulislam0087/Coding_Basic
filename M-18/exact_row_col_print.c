#include<stdio.h>

int main()
{
    int row, col;
    int arr[5][3];
    scanf("%d", &row);
    scanf("%d", &col);
    for (int i=0; i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int e;
    scanf("%d", &e);
    // print
    for (int i=0; i<col;i++)
    {
        printf("%d ", arr[e][i]);
    }


    return 0;
}
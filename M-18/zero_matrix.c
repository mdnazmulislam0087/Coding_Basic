#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    int arr[row][col];
    int element = row*col;
    for (int i =0; i <row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    int count= 0;
    for (int i =0; i<row;i++)
    {
        for (int j=0; j<col; j++)
        {
            if (arr[i][j]==0)
            {
                // printf("%d %d\n", i, j);
                count++;
            }
        }
    }
    // printf("%d", count);
    if (count == element)
    {
        printf("Zero MAtrix");
    }
    else
    {
        printf("Not a zero matrix");
    }


    return 0;
}
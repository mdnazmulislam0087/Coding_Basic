#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d", &row);
    scanf("%d", &col);
    int arr[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d", & arr[i][j]);
        }
    }

    int flag = 1;
    if (row !=col)
    {
        flag =0;
    }
    for (int i= 0; i<row; i++)
    {
        for (int j= 0; j<col; j++)
        {
            if (i ==j )
            {
                if (arr[i][j]!=arr[0][0])
                {
                    flag = 0;
                }
            }
            else if (arr[i][j]!=0)
            {
                flag = 0;
            }
            
        }
    }

    if (flag ==1)
    {
        printf("Scalar Diagonal");
    }
    else{
        printf("Not a Scalar");
    }

    return 0;
}
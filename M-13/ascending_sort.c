#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }
 
//  ascending order

    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            // printf("%d %d\n", i , j);
            // printf("%d %d\n", arr[i] , arr[j]);
            if (arr[i]>arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
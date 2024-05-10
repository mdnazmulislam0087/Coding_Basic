#include <stdio.h>
// call by reference
void fun(int arr[],int size)
{
    int sz = sizeof(arr)/sizeof(int);
    printf("The size of the array in fun function is %d\n", sz);
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = sizeof(arr)/sizeof(int);
    printf("The size of the array in main function is %d\n", sz);
    fun(arr, n);
 
    return 0;
}
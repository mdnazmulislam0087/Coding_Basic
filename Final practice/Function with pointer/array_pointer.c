#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Value first element of the array is %d\n", arr[0]);
    printf("The address of the first element of array is %p\n", &arr[0]);

    printf("\n\n");
    printf("The address of the first element of array is %p\n", &arr);
    printf("Using dereferencingThe Value first element of the array is %d\n", *arr);

    printf("\n\n");
    printf("The address of the first element of array is %p\n", &arr[1]);
    printf("Using dereferencingThe Value first element of the array is %d\n", *arr + 1);

    return 0;
}
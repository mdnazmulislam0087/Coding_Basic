#include <stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};
    printf("The address of 0th index- %p\n", &arr[0]);
    printf("The address of 0th index- %p\n", &arr);
    printf("The address of 0th index- %p\n", arr);
    printf("The address of 1st index- %p\n", &arr[1]);
    printf("The address of 2nd index- %p\n", &arr[2]);
    printf("The address of 3rd index- %p\n", &arr[3]);
    printf("The address of 4th index- %p\n", &arr[4]);
    // printf("The address of 5th index- %p\n", &arr[5]);


    printf("The value of 0th index- %d\n", arr[0]);
    // #dereferencing
    printf("The value of 1st index- %d\n", *(arr+1));
    printf("The value of 0th index- %d\n", *(1+arr));
    printf("The value of 0th index- %d\n", arr[1]);
    printf("The value of 0th index- %d\n", 1[arr]);
    return 0;

}
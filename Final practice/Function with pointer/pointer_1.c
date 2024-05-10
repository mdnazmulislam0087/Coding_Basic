#include <stdio.h>
int main(){
    int x =10;
    printf("The value of x is %d\n",x);
    printf("The value of address of x is %p\n", &x);

    int *pointer1 = &x;
    printf("The value of pointer 1 is %p\n", pointer1);
    printf("The value of the address of pointer 1 %p\n", &pointer1);

    // # dereferencing the pointer

    printf("The value from the pointer variable after dereferencing is %d\n", *pointer1);
 
    return 0;
}
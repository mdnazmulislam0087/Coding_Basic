#include<stdio.h>

int main(){
    int x =10;
    int *ptr = &x;

    // x= 200;
    *ptr =500;
    printf("The value of x - %d\n", x);
    printf("the value of x after dereferencing - %d\n", *ptr);

    return 0;
}
#include <stdio.h>
int main(){
    int x=100;
    int *ptr = &x;

    

    printf("x er value - %d\n", x);
    printf("x er memory address - %p\n", &x);
    printf("Ptr er value - %p\n", ptr);
    printf("Ptr er Address - %p\n", &ptr);
    printf("Ptr er Size - %d\n", sizeof(ptr));
    return 0;
}
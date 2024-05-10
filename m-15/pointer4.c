#include <stdio.h>

int main()
{
    double x = 2.5l;
    double *ptr = &x;
    double *ptr2 = ptr;

    *ptr2 =76.21;
    
    printf("The value of x - %0.2lf\n", x);
    printf("the value of x after dereferencing - %0.2lf\n", *ptr);
    printf("ptr er size- %d\n", sizeof(ptr));
    return 0;
}
#include<stdio.h>

void fun(int *p)
{
    printf("The value of p, %p\n", p);
    // dereferencing
    *p =600;
}

int main()
{
    int x =100;
    printf("the address of x %p\n", &x);
    fun(&x);
    printf("the value of x %d\n", x);
}
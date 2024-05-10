#include<stdio.h>

void fun(int x)
{
    printf("Fun er x er address %p\n", &x);
    x=100;
}

int main()
{
    int x= 10;
    printf("Main er x er address %p\n", &x);
    fun(x);
    printf("Main er X er value no change  , %d\n", x);
    return 0;
}
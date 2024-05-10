#include <stdio.h>
void fun(int x)
{
    x= 100;
    printf("x from the fun function = %d\n", x);
    printf("The address of x from fun function = %p\n", &x);
}
int main(){
    int x = 10;
    fun(x);
    printf("x from main function = %d\n", x);
    printf("The address of x from main function = %p\n", &x);

 
    return 0;
}
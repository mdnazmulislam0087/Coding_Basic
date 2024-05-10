#include <stdio.h>
void fun(int *p)
{
    *p= 100;
    printf("The value of x from the fun function = %d\n", *p);
    printf("The address of x from the fun function = %p\n", p);

}
int main(){
    int x;
    x =10;
    int *pointer = &x;
    fun(pointer);
    printf("x from main funtion = %d\n",x); 
    printf("The address of x from main funtion = %p\n",&x); 
    return 0;
}
#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int a, b;
int main(){
    scanf("%d %d", &a,&b);
    int s = sum(a,b);
    printf("%d", s);
    return 0;
}
#include<stdio.h>

void oneToN(int i, int n)
{
    if (i ==n+1)
    {
        return;
    }
    printf("%d\n", i);
    oneToN(i+1, n);

}

int main()
{
    int n; 
    int i=1;
    scanf("%d\n", &n);
    oneToN(i, n);
    return 0;
}
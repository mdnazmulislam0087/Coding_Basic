#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    for (i =1 ; i<=12; i++)
    {
        int res = i*n;
        printf("%d * %d = %d\n", n, i, res);
    }
 
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,s,k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i=1; i<=n;i++)
    {
        for (int j=s; j>=1; j--)
        {
            printf(" ");
        }
        for (int j=k; j>=1;j--)
        {
            printf("%d", j);
        }
        s--;
        k++;
        printf("\n");

    }
    return 0;
}
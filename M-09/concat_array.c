#include <stdio.h>
int main(){
    // array a of size n
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }

    int m; //array b of size m
    scanf("%d",&m);
    int b[m];
    for (int i=0; i<m; i++)
    {
        scanf("%d ",&b[i]);
    }

    //concatate arrays
    int ans[n+m];
    for (int i=0; i<n; i++)
    {
        ans[i] = a[i];
    }
    int i =n;
    for (int j=0; j<m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    //print final array

    for (int i=0; i<n+m; i++)
    {
        printf("%d ", ans[i]);
    }


 
    return 0;
}
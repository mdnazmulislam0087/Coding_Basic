#include <stdio.h>
#include <limits.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    // One eye, one mouth, and one body.
    int total1;
    int min1= INT_MAX;
    if ( a < min1)
    {
        min1=a;
    }
    if ( b < min1)
    {
        min1=b;
    }
    if ( c < min1)
    {
        min1=c;
    }
    total1=min1;

    // Two eyes, one mouth, and one body.
    int total2;
    int min2 = INT_MAX;
    if ( a%2 < min2)
    {
        min2=a%2;
    }
    if ( b < min2)
    {
        min2=b;
    }
    if ( c < min2)
    {
        min2=c;
    }
    total2 = min2;


    // Two eyes and one body.
    int total3;
    int min3 = INT_MAX;
    if ( a%2 < min3)
    {
        min3=a%2;
    }
    if ( c < min3)
    {
        min3=c;
    }
    total3 = min3;

// find the max of total1, total2, total3
    int max_final = INT_MIN;
    if (total1>max_final)
    {
        max_final = total1;
    }
    if (total2>max_final)
    {
        max_final = total2;
    }
    if (total3 >max_final)
    {
        max_final = total3;
    }
    // printf("%d %d %d\n", total1, total2, total3);

    printf("%d", max_final);

    return 0;
}
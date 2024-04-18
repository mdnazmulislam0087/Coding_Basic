#include <stdio.h>
int main(){


    int a =1000000000;
    // 10^9 or 2^32 accept kore
    // int 4 byte thats why
    long long int b = 10000000000;
    printf("%d", a);
    printf("\n");
    printf("%lld", b);
    printf("\n");

    // for float
    double c = 20003.43434324343;
    printf("%lf", c);
    return 0;
}
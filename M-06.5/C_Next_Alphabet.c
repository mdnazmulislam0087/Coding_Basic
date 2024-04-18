#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int res;
    if (a >= 'a' && a < 'z')
    {
        res = a+1;
    }
    else if (a =='z')
    {
        res = a-25;
    }
    printf("%c",res);
 
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    char str[100001];
    fgets(str, 100001, stdin);
    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }
 
    return 0;
}
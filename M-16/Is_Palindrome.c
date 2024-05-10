#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char c[])
{
    int n= strlen(c);
    int flag = 1;
    for (int i = 0; i<n; i++)
    {
        if (c[i] != c[n-i-1])
        {
            flag = 0;   
        }
    }
    return flag;
}

int main() {

    char c[1001];
    scanf("%s", &c);
    int pal = is_palindrome(c);
    if (pal == 1)
    {
        printf("Palindrome\n");
    }
    else
    { 
        printf("Not Palindrome\n");
    }
    // printf("%s",c);

    return 0;
}
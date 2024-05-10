#include<stdio.h>

char small_to_capital(int alphabet)
{
    return (alphabet-32);
}
int main()
{
    char alphabet;
    scanf("%c", &alphabet);
    int caps = small_to_capital(alphabet);
    printf("%c", caps);
    return 0;
}
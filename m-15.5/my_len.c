#include<stdio.h>
#include <string.h>

int count = 0;
int my_len(char c[])
{
//  printf("%d", strlen(c));
int i=0;
while (c[i] != '\0')
{
    count++;
    i++;
}
printf("%d", count);
}
int main()
{
    char c[6];
    scanf("%s", &c);
    my_len(c);
    
    return 0;
}
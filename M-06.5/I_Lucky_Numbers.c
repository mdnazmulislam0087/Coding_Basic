#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int first_number = input/10;
    int second_number = input % 10;
    if (second_number!= 0 && first_number%second_number == 0)
    {
        printf("YES\n");
    }
    else if (first_number!=0 && second_number % first_number == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
 
    return 0;
}
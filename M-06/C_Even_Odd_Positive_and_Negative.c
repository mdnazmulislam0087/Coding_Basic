#include <stdio.h>
int main(){
    int a,n,even_count, odd_count, positive_count, negative_count;
    even_count = 0;
    odd_count = 0;
    positive_count = 0;
    negative_count = 0;

    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if (a >0)
        {
            positive_count++;
        }
        else if (a < 0)
        {
            negative_count++;
        }

        if (a %2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }

    }
    printf("Even: %d\n",even_count);
    printf("Odd: %d\n",odd_count);
    printf("Positive: %d\n",positive_count);
    printf("Negative: %d", negative_count);
 
    return 0;
}
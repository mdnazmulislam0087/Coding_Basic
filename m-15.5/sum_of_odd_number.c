#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d", &n);
    int odd_sum =0;
    for (int i =0; i<n; i++)
    {
        scanf("%d ", &num);
        if (num%2 !=0){
            odd_sum+=num;
        }
    }
    printf("Sum of odd: %d\n", odd_sum);
    return 0;

}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count_two = 0;
    int count_three = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_two++;
        }
        else if (arr[i] %3 == 0)
        {
            count_three++;
        }
        
    }
    printf("%d %d\n",count_two,count_three);

 
    return 0;
}
#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int j=0; j<n; j++)
        {
            scanf("%d ",&arr[j]);
        }
        int x;
        scanf("%d ",&x);
        int flag=0;
        for (int i=0; i<n; i++)
        {
            if (arr[i] == x)
            {
                flag=1;
            }

        }
        if (flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
 
    return 0;
}
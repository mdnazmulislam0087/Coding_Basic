#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        char c[10001];
        scanf("%s\n",&c);
        int cap = 0;
        int smallest = 0;
        int dig =0;
        for(int j=0; j<=strlen(c); j++)
        {
            if (c[j] >= 'a' && c[j] <= 'z')
            {
                smallest++;
            }
            else if(c[j]>='0' && c[j]<='9')
            {
                dig++;
            }
            else if(c[j]>='A' && c[j] <= 'Z')
            {
                cap++;
            }
        }

        printf("%d %d %d\n",cap, smallest, dig);

    }
 
    return 0;
}
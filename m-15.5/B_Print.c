#include <stdio.h>

int fromto(int n){
    for (int i=1;i<=n-1;i++){
        printf("%d ", i);
    }
    for (int i=n; i<=n; i++)
    {
        printf("%d", i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    fromto(n);
    return 0;
}
#include <stdio.h>
#include <string.h>
void fun(char a[])
{
  printf("The size of a in the fun function is %d\n",strlen(a));  
}
int main(){
    char a[101];
    scanf("%s",&a);
    printf("The size of a in the main function %d\n",strlen(a));
    fun(a);
 
    return 0;
}
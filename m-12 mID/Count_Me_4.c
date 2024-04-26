#include <stdio.h>
#include <string.h>
int main(){
    char c[10001];
    scanf("%s", c);
    int count[26] ={0};
    for (int i=0; i<strlen(c); i++)
    {
       count[c[i]-'a']++;
    }
    
    for (int i=0; i<26 ; i++){
        if (count[i] != 0)
        {
            printf("%c - %d\n", i+'a', count[i]);
        }
        
    }


 
    return 0;
}
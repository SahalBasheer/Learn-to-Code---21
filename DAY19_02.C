//Write a C program to find the number of words in a string. Also reverse string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s[100],x,l;
    int i,a;
    a=1;
    gets(&s);
    l=strlen(s);
    scanf("%c",&x);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            a++;
    }
    printf("no of words = %d\n",a);
    
    for(i=l-1;s[i]!='\0';i--)
    {
        printf("%c",s[i]);
    }
  
    
    return 0;
}

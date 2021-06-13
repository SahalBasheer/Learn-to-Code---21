//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s[100],x;
    int i,a;
    a=0;
    gets(&s);
    scanf("%c",&x);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==x)
            a++;
    }
    printf("%d",a);
  
    
    return 0;
}

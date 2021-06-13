//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s[200],x,l;
    int i,a,b,c;
    a=0;
    b=0;
    c=0;
    gets(&s);
    l=strlen(s);
    scanf("%c",&x);
  
    
    for(i=l-1;s[i]!='\0';i--)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            a++;
        else 
            if(s[i]==' ')
            b++;
        else
            c++;
    }
    
    printf("%d\n",a);
    printf("%d\n",c);
    printf("%d",b);
  
    
    return 0;
}

//Write a C program to change the case of alphabets.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char s[100];
    int i;
    gets(s);
    
    for(i=0;i!=100;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]= s[i]+32; 
        else if(s[i]>='a' && s[i]<='z')
            s[i]= s[i]-32; 
    }
  
    
    printf("%s", s);
       
    return 0;
}

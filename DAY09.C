//C program to print the HCF of two numbers


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,c,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    c=(a%i==0 && b%i==0)?i:c;
    
    printf("%d",c);
    return 0;
}

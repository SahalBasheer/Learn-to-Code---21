//Write a C program to swap the values of two variables.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
int a,b;
    scanf("%d%d",&a,&b);    
    swap(a,b);
    
    return 0;
}


int swap(int a,int b)
{
    int temp;
    printf("a=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\na=%d b=%d",a,b);
    return 0;
}

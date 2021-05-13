//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,h,r,x;
    float y,z;
    scanf("%d", &a);
    scanf("\n%d", &r);
    scanf("\n%d", &b);
    scanf("  %d", &h);
    x=a*a;
    y=3.14*r*r;
    z=0.5*b*h;
    printf("%d", x);
    printf("\n%.1f", y);
    printf("\n%.2f", z);
    return 0;
}

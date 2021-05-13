//Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float f,c;
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("%.2f", c);
    return 0;
}

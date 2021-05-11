//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a;
char b;
float g;
double e;
scanf("%c",&b);
scanf("%d",&a);
scanf("%f",&g);
scanf("%lf",&e);

printf("%c", b);
printf("\n%d", a);
printf("\n%f", g);
printf("\n%lf", e);

return 0;

}

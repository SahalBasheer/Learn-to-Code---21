//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int b,c,a;
    float d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d=(a+b+c)/3.0;
    if(d>=90)
{
    printf("%.2f" , d);
    printf("\nA");
        }
    else 
  if(d>=80)
{
        printf("%.2f" , d);
    printf("\nB");
        }
    
    else
      if(d>=70)
{
       printf("%.2f" , d);
    printf("\nC");
        }
    else
      if(d>=60)
{
        printf("%.2f" , d);
    printf("\nD");
        }
    else
      if(d>=40)
{
        printf("%.2f" , d);
    printf("\nE");
        }
    else
      if(d<40)
{
        printf("%.2f" , d);
    printf("\nF");
        }
    
return 0;
}

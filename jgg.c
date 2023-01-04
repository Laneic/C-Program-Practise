#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,x1,c,x2;
    printf("write coeffcient of X^2:");
    scanf("%f",&a);
    printf("\nwrite coeffcient of X:");
    scanf("%f",&b);
    printf("\nwrite C");
    scanf("%f",&c);
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("%.1f%.1f",x1,x2);
       
}
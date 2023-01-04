//Operators
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Write Value of A:");
    scanf("%d",&a);
    printf("\nWrite Value of B:");
    scanf("%d",&b);
    printf("\nWrite Value of C:");
    scanf("%d",&c);
    printf("\n%d",a>b);
    printf("\n%d",a<b);
    printf("\n%d",a==b);
    printf("\n%d",a>b&&b>c);
    printf("\n%d",a>b&&b<c);
    printf("\n%d",a<b&&b>c);
    printf("\n%d",a>b||a>b);
    printf("\n%d",a<b||a>b);
    printf("\n%d",a>b||a<b);
    printf("\n%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a>>b);
    printf("\n%d",a<<b);

}

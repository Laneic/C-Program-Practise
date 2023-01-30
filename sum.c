#include<stdio.h>
int main()
{
    int a,b,num;
    printf("enter a 3 digit number:");
    scanf("%d",&num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    num=num+a+b;
    printf("%d",num);
    return 0;   
}

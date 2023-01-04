#include<stdio.h>
int main()
{
    int a,b,num;
    printf("enter a 3 digit number:");
    scanf("%d",&num);
    a=num%10;//3
    num=num/10;//12
    b=num%10;//2
    num=num/10;//1
    printf("New number:%d",100*a+10*b+num);
}
//WAP to swap variables without using third variable
#include<stdio.h>
 void main()
 {
   int a,b;
  printf("Write Value of A: ");
  scanf("%d",&a);
  printf("\nWrite Value of B: ");
  scanf("%d",&b);
  a=b+a;
  b=a-b;
  a=a-b;

  printf("New A=%d and B=%d",a,b);
 }
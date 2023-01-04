#include<stdio.h>
#include<conio.h>

void main()
 {
    float a,b,c,d,e,percentage;
    printf("Marks of A: ");
    scanf("%f",&a);
    printf("\nMarks of B: ");
    scanf("%f",&b);
    printf("\nMarks of C: ");
    scanf("%f",&c);
    printf("\nMarks of D: ");
    scanf("%f",&d);
    printf("\nMarks of E: ");
    scanf("%f",&e);
    percentage=(a+b+c+d+e)/5;
    printf("Percentage:%f",percentage);

 }
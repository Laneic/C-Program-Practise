//WAP To calculate SI and CI
#include<stdio.h>
#include<math.h>
void main()

{
    float P,T,R,SI,CI,N;
    printf("Write the principal amount: ");
    scanf("%f",&P);
    printf("\nWrite Time: ");
    scanf("%f",&T);
    printf("\nWrite the Rate of intrest: ");
    scanf("%f",&R);
    SI=(P*R*T)/100.0;  
    printf("Simple Intrest:%f",SI);
    printf("\nWrite the amount of times rate is applied:");
    scanf("%f",&N);
    CI=P+pow((N+R)/N,T*N);
    printf("\nCompound Intrest:%f",CI);

}
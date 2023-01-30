#include<stdio.h>
#include<math.h>
void main()
{
    float n,j,k;
    float i,x;
    float sum2=1;
    float sum3=1;

    scanf("%f",&n);
    scanf("%f",&x);
        for(k=1;k<=n;k++){
            int sum=1;
            for (i=1;i<=k;i++){
            sum=sum*i;
            }
        sum2=(pow(x,k))/sum;
        sum3=sum3+sum2;        
   }
   printf("%f",sum3);
}
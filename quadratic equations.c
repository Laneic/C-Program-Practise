#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,x1,c,x2;
    printf("write coeffcient of X^2");
    scanf("%f",&a);
    printf("\nwrite coeffcient of X");
    scanf("%f",&b);
    printf("\nwrite C");
    scanf("%f",&c);

    if (b*b-4*a*c>0)
        {
            x1=(-b+sqrt(b*b-4*a*c))/2*a;
            x2=(-b-sqrt(b*b-4*a*c))/2*a;
            printf("\n%f%f",x1,x2);
        }
    else if (b*b-4*a*c<0)
        {
            x1=-b/(2.0*a);
            printf("\nRoots are %f+i%f and %f-i%f",x1,(sqrt(fabs(b*b-(4*a*c))))/(2.0*a),x1,((sqrt(fabs(b*b-(4*a*c)))/(2.0*a))));
        }
    else if(b*b-4*a*c==0)
    {
            x1=-b/(2.0*a);
            printf("both roots are %f",x1);
        
    }    
       
}
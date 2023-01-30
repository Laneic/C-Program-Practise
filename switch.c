#include<stdio.h>
int main(){
    int a,b,n,x,y;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n>=1&&n<=4){
        printf("Enter value of a,b and x:");
        scanf("%d%d%d",&a,&b,&x);
        switch(n){
            
            case 1:
            y=(a*x)%b;
            break;
            case 2:
            y=(a*x*x)+(b*b);
            break;
            case 3:
            y=a-(b*x);
            break;
            case 4:
            y=(float)a+(float)x/(float)b;
            break;
        }
        printf("%d",y);
    }
    else{
        printf("Wrong input");}
  return 0;
}
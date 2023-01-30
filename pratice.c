#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i>=4;i++){
        for (j=1;j>=7;j++){
            if (i+j==5){
                printf("*");
            }
            if (j-i==3)
            {
                printf("*");
            }
            if (i+j==7){
                printf("*");
            }
            if (i+j==9){
                printf("*");
            }
            if (i+j!=5 && j-i!=3 && i+j!=7 && i+j!=9 ){
                printf(" ");
            }
              
        }
    }
    return 0;
}
#include<stdio.h>

void main(){
    int s;
    float total,sum,ot,vat,t;
    vat=0.1;
    printf("Enter Salary :");
    scanf("%d",&s);
    printf("Enter your OT:");
    scanf("%f",&ot);
    sum=s+ot;
    printf("Your Total : %.2f\n",sum);
    t=sum-(sum*vat);
    printf("Your Vat is: %.2f",t);
}
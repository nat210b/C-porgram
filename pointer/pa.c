#include<stdio.h>
int main(){

    int num[5]={10,20,30,40,50};
    int *ip=num;//เหมือนกัน//
    int *ip2=&num[2];//เหมือนกัน//

    printf("num pass pointer ip : %d\n",*ip);
    printf("num pass pointer ip2 : %d\n",*ip2);
    printf("num pass pointer ip2[1] : %d\n",ip2[0]);// บวก2//
    printf("num pass pointer ip2[4] : %d\n",ip2[2]);// บวก4//
    printf("num pass pointer ip2[-2] : %d\n",ip2[-2]);// บวก4//
    for(int i=0;i<=4;i++){
        printf("\nValue : %d\n",ip[i]);//แสดงvalue //
        printf("Ip : %p\n",ip[i]);//แสดง add //
    }
    return 0;
}
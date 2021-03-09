#include <stdio.h>
void main(){
    int num=10;
    int name;
    int *ip;
    ip=&num;
    printf("address of num is :  %p\n",&num);
    printf("address of name is : %p\n",&name);
    printf("address of *ip is : %p\n",&ip);
    printf("address of *ip of num is : %p\n",ip);
    printf("value of num pass pointer is : %d\n",*ip);

}
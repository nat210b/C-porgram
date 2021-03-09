//pointer and Fx
#include <stdio.h>
int add(int *n){
    *n=*n+5;
    //printf("Plus 5 = %d",*n);//
    return *n;

}
void main (void){
    int num = 5 ;
    //add(&num);//
    printf("Value is %d",add(&num));


}
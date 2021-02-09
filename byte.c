//โปรแกรมคำนวณBYTE //
#include <stdio.h>

void main(){
    long int a;
    double  b;
    //===================input byte==========//
    printf("Input Byte :");
    scanf("%d",&a);
    //===================input byte==========//7
    //=========process========//
    if (a < 1023){
        printf("Your file Size : %d Byte",a);
    }else if (a<=1048575) 
    {
        //========1st condition=======//
        b=a/1024;
        printf("Your File Size : %.2f KB",b);
        //========1st condition=======//
    }else if (a<=1073741823){
        //========2nd condition=======//
        b=a/1048576;
        printf("Your File SIze: %.2f MB",b);
        //========2nd condition=======//
    }else{
        //==========Last condition======//
        b=a/1073741824;
        printf("Your File Size : %.2f GB",b);
    }
    //==========Last condition======//
}


/*โปรแกรมคำนวณอายุ หากอายุมากกว่าหรือเท่ากับ 50 แสดงคำว่า OLD 
    หากอายุน้อยกว่า50 แสดงคำว่า Young */
#include <stdio.h>
void main(){
    //=============variable================//
    int age;
    //=============variable================//
    printf("Input Your Age : ");
    scanf("%d",&age);
    //==============Process===============//
    if(age >= 50){
        printf("OLD!!");
    }else{
        printf("YOUNG!!");
    }
    //==============Process===============//
}

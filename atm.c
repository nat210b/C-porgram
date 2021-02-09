//โปรแกรมATM จำลองว่าผู้ใช้งานมีเงิน 50000 บาท //
#include <stdio.h>

void main(){
    //====================variable===============//
    int money,a;
    //====================variable===============//
    //====================INPUT===============//
    printf("Please input Withdraw money : ");
    scanf("%d",&money);
    //====================INPUT===============//
    //====================Process===============//
    if(money > 20000){
        printf("Your limit Withdraw is 20000 Bath\n");
    }else if(money%100 != 0){
        printf("INCORRECT Withdraw Amount\n");
    }else{
        a = 50000 - money;
        printf("Your Total : %d Bath \n",a);
    }
    //====================Process===============//
    
    printf("Thank You");
}


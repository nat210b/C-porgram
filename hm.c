#include <stdio.h>
#include <stdbool.h>

void main(){
    //ประกาศตัวแปร//
    int total[10];
    
    //การทำงาน//
    total[0] = 60 > 2;
    total[1] = 562 <= 201;
    total[2] = 652 == 543;
    total[3] = 22 != 22;
    total[4] = 1024 && 0;
    total[5] = 1 && 1;
    total[6] = (2 != 1 ) || 1 ;//T 1 กรณี = T //
    total[7] = (2 == 1) || 1 ;
    total[8] = (10 <= 1 ) && (12 > 15); //&&คือ T T = T//
    total[9] = !((10 <= 1)||(15==15));// != not//
    //การแสดงผล//
    printf("%d\n",total[0]) ;
    printf("%d\n",total[1]) ;
    printf("%d\n",total[2]) ;
    printf("%d\n",total[3]) ;
    printf("%d\n",total[4]) ;
    printf("%d\n",total[5]) ;
    printf("%d\n",total[6]) ;
    printf("%d\n",total[7]) ;
    printf("%d\n",total[8]) ;
    printf("%d\n",total[9]) ;
    //จบการทำงาน
   


}
#include <stdio.h>

void main(){
    int math[4],com[4],physic[4],sum[4];
    //กำหนดตัวแปร// 
    printf("***************************************************\n");
    printf("Score Student 1 Math ComputerPrograming And Physic :");
    scanf("%d %d %d\n",&math[1],&com[1],&physic[1]);

    printf("Score Student 2 Math ComputerPrograming And Physic :");
    scanf("%d %d %d\n",&math[2],&com[2],&physic[2]);
    
    printf("Score Student 3 Math ComputerPrograming And Physic :");
    scanf("%d %d %d\n",&math[3],&com[3],&physic[3]);

    sum[1] = math[1]+com[1]+physic[1];
    sum[2] = math[2]+com[2]+physic[2];
    sum[3] = math[3]+com[3]+physic[3];
    //แสดงผล//
    printf("********************Total_Score********************\n");

    printf("Total_Score _Student_1 : %d\n",sum[1]);  
    printf("Total_Score _Student_2 : %d\n",sum[2]);  
    printf("Total_Score _Student_3 : %d\n",sum[3]);

    printf("***************************************************\n");
}
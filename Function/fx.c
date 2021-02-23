#include <stdio.h>
/***********************Phototype**********************************/
void natty();
void addition(int num1, int num2);
double divide(int num1, int num2);
/***********************Phototype**********************************/
int main()
{
    natty();
    //ต้องใส่Parameter//
    addition(7, 59);
    printf("Divide : %.2f ", divide(250, 15));
    return 0;
    //ไม่มีการรีเทินค่า และรับค่าใดๆ//
}
void natty()
{
    printf("NATTY!!!\n");
}
void addition(int num1, int num2) //Fบวกเลข//
{
    printf("Total = %d\n", num1 + num2);
}
//รับParameter//
double divide(int num1, int num2) //หาร รีเทินค่ากลับเป็นDouble//
{
    return num1 / num2;
}

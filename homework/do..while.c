#include <stdio.h>

void main()
{ //================-variuable-============//
    int num = 1,a;
    //================-variuable-============//
    //================-Process-============//
    do
    {
        a=23*num;
        printf("23 * %d = %d\n",num,a);
        num++;
    } while (num <= 12); //ถ้าน้อยกว่าหรือเท่ากับ12ให้ทำซ้ำ//

    //================-Process-============//
    //================-Output-============//
    printf("Exit");
}
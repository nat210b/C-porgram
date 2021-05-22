#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//โปรแกรมลงชื่อเพื่อเข้ามหาวิทยาลัย//
void std(void)
{
    struct student
    {
        char name[10];
        double id;
        int phone[50];
        float time_in;
        float time_out;
    } std; //struct สำหรับ นศ//
    char s;
    int i, o;
    printf("Enter Your name :");
    gets(std.name);
    printf("\nEnter Your Student ID : ");
    scanf("%d", &std.id);
    printf("\nEnter Your Phone number : ");
    scanf("%d", &std.phone);
    printf("i = in/ o = out\n");
    printf("in or out:");
    scanf("%s", &s);
    switch (s)
    {
    case 'i':
        printf("Enter Arrive time  (EX. 12.00) : ");
        scanf("%f", &std.time_in);
        printf("*******************************************************\n");
        printf("\nArrive time : %.2f\n", std.time_in);
        break;
    case 'o':
        printf("Enter Leave time (EX. 18.00) : ");
        scanf("%f", &std.time_out);
        printf("*******************************************************\n");
        printf("\nLeeave time : %.2f\n", std.time_out);
        break;
    default:
        printf("\nPlease Enter i or o");
        break;
    }
    printf("\nYour name is : %s", std.name);
    printf("\nYour Student ID is : %d", std.id);
    printf("\nYour Phone number is : 0%d", std.phone);
    printf("\n*******************************************************\n");
}
//สร้างStructเพื่อแบ่งประเภทข้อมูล//
void tcr(void)
{
    struct Teacher
    {
        char name[10];
        int phone[10];
        float time_in;
        float time_out;
    } tcr; //struct สำหรับ อาจารย์//
    char s;
    int i, o;
    printf("Enter Your name :");
    gets(tcr.name);
    printf("\nEnter Your Phone number : ");
    scanf("%d", &tcr.phone);
    printf("i = in / o = out\n");
    printf("in or out:");
    scanf("%s", &s);
    switch (s)
    {
    case 'i':
        printf("Enter Arrive time  (EX. 12.00) : ");
        scanf("%f", &tcr.time_in);
        printf("*******************************************************\n");
        printf("\nArrive time : %.2f\n", tcr.time_in);
        break;
    case 'o':
        printf("Enter Leave time (EX. 18.00) : ");
        scanf("%f", &tcr.time_out);
        printf("*******************************************************\n");
        printf("\nLeave time : %.2f\n", tcr.time_out);
        break;
    default:
        printf("Please Enter i or o");
        break;
    }
    printf("Teacher name is : %s\n", tcr.name);
    printf("Teacher Phone number is : 0%d\n", tcr.phone);
    printf("\n*******************************************************\n");
}
void stf(void)
{
    struct staff
    {
        char name[10];
        int phone[10];
        float time_in;
        float time_out;
    } stf; //struct สำหรับ บุคลากร//
    char s;
    int i, o;
    printf("Enter Your name : ");
    gets(stf.name);
    printf("\nEnter Your Phone number : ");
    scanf("%d", &stf.phone);
    printf("i = in / o = out\n");
    printf("in or out:");
    scanf("%s", &s);
    switch (s)
    {
    case 'i':
        printf("Enter Arrive time  (EX. 12.00) : ");
        scanf("%f", &stf.time_in);
        printf("*******************************************************\n");
        printf("\nArrive time : %.2f\n", stf.time_in);
        break;
    case 'o':
        printf("Enter Leave time (EX. 18.00) : ");
        scanf("%f", &stf.time_out);
        printf("*******************************************************\n");
        printf("\nLeave time : %.2f\n", stf.time_out);
        break;
    default:
        printf("Please Enter i or o");
        break;
    }
    printf("\nStaff name is : %s", stf.name);
    printf("\nStaff Phone number is  : 0%d", stf.phone);
    printf("\n*******************************************************\n");
}
void gst(void)
{
    struct Guest
    {
        char name[10];
        int phone[10];
        float time_in;
        float time_out;
    } gst; //struct สำหรับ แขกภายนอก//
    char s;
    int i, o;
    printf("Enter Your name : ");
    gets(gst.name);
    printf("\nEnter Your Phone number : ");
    scanf("%d", &gst.phone);
    printf("i = in/ o = out");
    printf("in or out:");
    scanf("%s", &s);
    switch (s)
    {
    case 'i':
        printf("Enter Arrive time  (EX. 12.00) : ");
        scanf("%f", &gst.time_in);
        printf("*******************************************************\n");
        printf("\nArrive time : %.2f", gst.time_in);
        break;
    case 'o':
        printf("Enter Leave time (EX. 18.00) : ");
        scanf("%f", &gst.time_out);
        printf("*******************************************************\n");
        printf("\nLeave time : %.2f", gst.time_out);
        break;
    default:
        printf("Please Enter i or o");
        break;
    }
    printf("\nYour name is : %s", gst.name);
    printf("\nYour Phone number is : 0%d", gst.phone);
    printf("\n*******************************************************\n");
}

int main()
{
    char role;
    printf("***************************************************\n");
    printf("Status: Student = a\tTeacher = b\tStaff = c\tGuest = d\n");
    printf("Enter your Status : ");
    scanf("%s", &role);
    printf("***************************************************\n");
    switch (role)
    {
    case 'a':
        printf("Your are Student\n");
        std();
        break;
    case 'b':
        printf("Your are Teacher\n");
        tcr();
        break;
    case 'c':
        printf("Your are Staff\n");
        stf();
        break;
    case 'd':
        printf("Your are Guest\n");
        gst();
        break;
    default:
        printf("Please try again");
        break;
    }
}
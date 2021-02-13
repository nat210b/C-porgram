#include   <stdio.h>
//ส่วนที่1
void main(){
//ส่วนที่2

//ตัวแปร
//ทำระบบสมัครสมาชิก เก็บข้อมูล 4 อย่าง username    email  pass repass phonenum
//=======================           char[]  char[] char[] char[] int[]===================
char username[20], email[50], pass[50], repass[50];
int phonenum;

//ตัวแปร

//การรับข้อมูล
printf("your username is :");
scanf("%s",&username);

printf("your eamil is :");
scanf("%s",&email);

printf("your pass is :");
scanf("%s",&pass);

printf("your repass is :");
scanf("%s",&repass);

printf("your phonenum is :");
scanf("%d",&phonenum);


//การรับข้อมูล


//การแสดงผล

printf("success\n");
printf("your username is : %s\n",&username);
printf("your email is : %s\n",&email);


}
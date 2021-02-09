#include <stdio.h>
char student_id[50], name[20], surname[20], username[20], password[20], email[20], age[4], hight[4], weight[4]; //กำหนดค่าตัวอักษร

void main(){

    printf("Student id : ");
    scanf("%s",&student_id);
    //รหัสนศ.
    printf("Name : ");
    scanf("%s",&name);
    //ชื่อนศ.
    printf("Surname : ");
    scanf("%s",&surname);
    //นามสกุล นศ.
    printf("Age : ");
    scanf("%s",&age);
    //อายุ
    printf("Username : ");
    scanf("%s",&username);
    //ชื่อผู้ใช้
    printf("Password : ");
    scanf("%s",&password);
    //รหัสผ่าน
    printf("Email : ");
    scanf("%s",&email);
    //อีเมล
    printf("Hight :");
    scanf("%s",&hight);
    //ส่วนสูง
    printf("Weight : ");
    scanf("%s",&weight);
    //น้ำหนัก

    printf("success\n");

    printf("Student ID : %s\n",&student_id);
    printf("Name : %s ",&name);
    printf(" %s  \n",&surname);
    printf("AGE : %s\n",&age);
    printf("Username : %s \n",&username);
    printf("Email : %s\n",&email);
    printf("Hight : %s \n",&hight);
    printf("Weight : %s \n",&weight);

}

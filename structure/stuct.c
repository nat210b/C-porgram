#include <stdio.h>
#include <string.h>
int main()
{
    //1//
    struct student
    {
        char name[10];
        char surname[10];
        int age;
    };
    //2//
    struct student std;
    //3//
    strcpy(std.name, "Wannachol");
    strcpy(std.surname, "Pinprom");
    std.age = 19;
    //4//
    printf("Name : %s %s\n", std.name, std.surname);
    printf("AGE : %d", std.age);

    return 0;
}
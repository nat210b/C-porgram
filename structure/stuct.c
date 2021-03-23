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
    struct classroom
    {
        char name[10];
        char class[10];
        struct student std;
    };
    
    //2//
    struct classroom clr;
    //3//
    strcpy(clr.name, "CED");
    strcpy(clr.class, "Year 1");
    strcpy(clr.std.name, "Wannachol");
    strcpy(clr.std.surname, "Pinprom");
    clr.std.age = 19;
    //4//
    printf("Class Name : %s\n", clr.name);
    printf("Level : %s\n", clr.class);
    printf("Name : %s %s\n", clr.std.name, clr.std.surname);
    printf("AGE : %d Years old", clr.std.age);

    return 0;
}
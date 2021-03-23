#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    char surname[10];
    int age;
};
typedef struct
{
    char name[10];
    char level[10];
    struct student std;
} classroom;
int main()
{
    classroom clr;
    strcpy(clr.name, "CED");
    strcpy(clr.level, "Year 1");
    strcpy(clr.std.name, "Wannachol");
    strcpy(clr.std.surname, "Pinprom");
    clr.std.age = 19;

    printf("Class name : %s\n", clr.name);
    printf("Level : %s\n", clr.level);
    printf("Name : %s\n", clr.std.name);
    printf("Surname : %s\n", clr.std.surname);
    printf("Age : %d Years", clr.std.age);
    return 0;
}

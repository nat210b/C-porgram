#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    struct student std[10];
} classroom;

int main()
{
    int i;
    char temp_age[10];
    classroom clr;

    for (i = 0; i < 3; i++)
    {
        printf("Student %d name:",i+1);
        gets(clr.std[i].name);
        printf("Enter your Age:");
        gets(temp_age);
        clr.std[i].age = atoi(temp_age);
        printf("Your name is : %s\n", clr.std[i].name);
        printf("Age: %d Years\n", clr.std[i].age);
    }
}
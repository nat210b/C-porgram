#include <stdio.h>
int num1, num2;
char a;

int plus()
{
    int sum;
    sum = num1 + num2;
    return sum;
}
int decrement()
{
    int sum;
    sum = num1 - num2;
    return sum;
}
int power()
{
    int sum;
    sum = num1 * num2;
    return sum;
}
double divide()
{
    int sum;
    sum = num1 / num2;
    return sum;
}

void main()
{
    printf("ENter number: ");
    scanf("%d", &num1);
    printf("Enter Process : ");
    scanf("%s", &a);
    printf("ENter number: ");
    scanf("%d", &num2);
    switch (a)
    {
    case '+' :
        printf("total : %d ",plus(num1,num2));
        break;
    case '-' :
        decrement(num1, num2);
        printf("total : %d",decrement(num1,num2));
        break;
    case '*' :
        power(num1, num2);
        printf("total : %d",power(num1,num2));
        break;
    case '/':
        divide(num1, num2);
        printf("total : %.2f",divide(num1,num2));
        break;
    default:
        printf("ERROR!!");
        break;
    }
}

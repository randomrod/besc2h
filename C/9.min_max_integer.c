//9.      Write a program to take three integers as input and display the maximum and minimum.
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter the three integers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1>num2 && num1>num3)
    {
        if (num2>num3)
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num1, num3);
        else
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num1, num2);
    }
    else if (num2>num1 && num2>num3)
    {
        if (num1>num3)
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num2, num3);
        else
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num2, num1);
    }
    else if (num3>num2 && num3>num1)
    {
        if (num2>num1)
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num3, num1);
        else
        printf("the biggest integer is %d\nthe smallest integer is %d\n", num3, num2);
    }
    else
    printf("the integers are equal\n");
system("pause");
}

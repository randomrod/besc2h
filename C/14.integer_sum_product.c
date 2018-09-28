//14.  Write a program to print the sum and product of digits of an integer.
#include<stdlib.h>
#include<stdio.h>

int sumfunc(int num)
{
    int sum=0, rem;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum; 
}

int prodfunc(int num)
{
    int prod=1, rem;
    while (num>0)
    {
        rem=num%10;
        prod=prod*rem;
        num=num/10;
    }
    return prod;
}

int main()
{
    int num1;
    printf("enter an Integer: ");
    scanf("%d", &num1);
    printf("The Sum of all digits in the interger is %d\n", sumfunc(num1));
    printf("The Product of all digits in the interger is %d\n", prodfunc(num1));
    system("pause");
    return 0;
}

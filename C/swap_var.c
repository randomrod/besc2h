#include<stdio.h>
int main() 
{
	int num1, num2, temp;
	printf("enter the numbers to be swapped:");
	scanf("%d %d", &num1, &num2);
	temp = num1;
	num1 = num2;  
	num2 = temp;
	
	printf("first number: %d  second number: %d", num1, num2);
}

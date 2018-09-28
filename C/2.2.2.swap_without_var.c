//2. (ii) Write a program to swap two numbers without using third variable.
#include<stdio.h>
int main() {
	int num1, num2, temp;
    printf("enter two numbers to be swapped:");	
	scanf("%d %d", &num1, &num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2; 

	printf("first number: %d  second number: %d", num1, num2);
}

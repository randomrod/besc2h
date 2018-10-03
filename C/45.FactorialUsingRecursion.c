//45. WAP to calculate Factorial of a number using recursion

#include<stdio.h>
#include<stdlib.h>
unsigned long long fact(int n)
{
	if (n==1)
	return 1;
	else
	return n*fact(n-1);
}

int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d", &num);
	printf("%llu\n", fact(num));
	system("pause");
}

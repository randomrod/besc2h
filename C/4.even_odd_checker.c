//4.      Write a program to check whether a number is odd or even
#include <stdio.h>
int main()
{printf("Enter number (integer) to be checked");
	int num;
	scanf("%d", &num);
	if (num%2==0) printf("Inputted number is even");
	else printf("Inputted number is odd");
}

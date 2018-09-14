#include <stdio.h>
int main()
{printf("Enter number (integer) to be checked");
	int num;
	scanf("%d", &num);
	if (num%2==0) printf("Inputted number is even");
	else printf("Inputted number is odd");
}

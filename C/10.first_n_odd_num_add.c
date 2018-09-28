//10.  Write a program to compute the sum of the first n odd numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum=0;
	printf("enter the number of odd terms to be added:\n");
	scanf("%d", &n);
	int i=1;
	for (i=1;i<=2*n;i=i+2)
	{
		sum=sum+i;
	}
	printf("%d", sum);
	system("pause");
}

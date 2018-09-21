#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("please enter the number to be squared:");
	scanf("%d", &num);
	int sqr=pow(num,2);
	printf("%d", sqr);
}

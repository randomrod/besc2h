// 25.a. Evaluate: (a) S= 1! + 2! + 3! + 4! + …............ + n!

#include<stdio.h>
#include<stdlib.h>
unsigned long long fact(int n)
{
	if (n==1)
	return 1;
	else
	return n*fact(n-1);
}

int main(){
    int i,n;
    printf("enter the value of 'n': ");
    scanf("%d", &n);
    int sum=0;
    for (i=1;i<=n;i++){
        sum=sum+fact(i);
    }
    printf("%d\n", sum);
    return 0;
}

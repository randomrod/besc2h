#include<stdio.h>
#include<math.h>
unsigned long long fact(int n)
{
	if (n==1)
	return 1;
	else
	return n*fact(n-1);
}

int main(){
    int i,x,n;
    printf("enter the value of 'x': ");
    scanf("%d", &x);
    printf("enter the number of terms (n): ");
    scanf("%d", &n);
    int sum=0;
    for (i=1;i<=n;i+2){
        sum=sum+(pow(x,i)/fact(i))*pow(-1,i);
    }
    printf("%d\n", sum);
    return 0;
}

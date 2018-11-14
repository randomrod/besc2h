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
    int i,n;
    float degx,rad;
    printf("enter the value of 'x': ");
    scanf("%f", &degx);
    printf("enter the number of terms (n): ");
    scanf("%d", &n);
    rad=degx*(3.14/180);
    float sum=0.0;
    for (i=0;i<n;i++){
        sum=sum+(pow(rad,2*i)/fact(2*i))*pow(-1,i);
    }
    printf("%.4f\n", rad);
    printf("%.4f\n", sum);
    return 0;
} 

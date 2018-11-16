// 26.b. Write a program to find the sum of cosine series taking x (in radian) and n (number of terms) as input.
Print the result at the output terminal. Correct up to 4 decimal places.

#include<stdio.h>
#include<math.h>
unsigned long long fact(int n)
{
	if (n<=1)
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
    
	rad=(degx*3.14)/180;
	float sum=0.0;
    int p;
	for (i=0;i<n;i++){
        p=2*i;
		sum += (pow(rad,p)/fact(p))*pow(-1,i);
    }
    
	printf("%.4f\n", sum);	
	return 0;
} 

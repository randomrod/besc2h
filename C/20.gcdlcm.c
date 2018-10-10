//20. Write a program to find GCD and LCM of two integers.

#include<stdio.h>

int gcd(int a, int b){
	if (a==0)
	return b;
	else 
	return gcd(b%a,a);
}
int lcm(int a, int b){
	return ((a*b)/gcd(a,b));
}
int main(){
	int a, b;
	printf("enter the numbers: \n");
	scanf("%d %d", &a, &b);
	printf("the GCD of %d and %d is: %d\nthe LCM of %d and %d is: %d", a, b, gcd(a,b), a, b, lcm(a,b));
    getch();
}

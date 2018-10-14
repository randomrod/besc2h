//12. Write a program to check whether a number is Peterson number or not (sum of factorials of digits is equal to the given number)

#include<stdio.h>
#include<math.h>

unsigned long long fact(int n){
	if (n==1)
	return 1;
	else
	return n*fact(n-1);
}

long sumoffact(int num){
    int digit,factdigit,i,sum=0;
    while(num>0){
        digit=num%10;
        num/=10;
        factdigit=fact(digit);
        sum+=factdigit;
    }
    return sum;
}

int main(){
    int num,numori;
    printf("enter the number to be checked: ");
    scanf("%d", &num);
    numori=num;
    if (sumoffact(num)==numori)
    printf("%d is a Peterson Number\n", numori);
    else
    printf("%d is not a Peterson Number\n", numori);
    return 0;
}

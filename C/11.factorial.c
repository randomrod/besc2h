//11. Write a program to calculate the factorial of an integer.

#include<stdio.h>

int main(){
    unsigned long long num,fact;
    int i=1;
    printf("enter the number: ");
    scanf("%llu", &num);
    fact=num;
    for (i=1;i<num;i++){
        fact*=i;
    }
    printf("%llu! = %llu\n", num, fact);
    return 0;
}

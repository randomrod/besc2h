//16. Write a function to find whether a given no. is prime or not. Use the same to generate the prime numbers less than 100.

#include<stdio.h>

int primecheck(int num){
    int i=2;
    if (num==1)
    return 0;
    else{
        for (i=2;i<num;i++){
            if (num%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int j,ret2,num,ret;
    printf("enter the number to checked: ");
    scanf("%d", &num);
    ret=primecheck(num);
    if (ret==1)
    printf("%d is a prime number\n", num);
    else
    printf("%d is not a prime number\n", num);
    printf("prime numbers till 100 are:\n");
    for (j=1;j<100;j++){
        ret2=primecheck(j);
        if (ret2==1)
        printf("%d\n", j);
    }
    return 0;
}

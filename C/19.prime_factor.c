//19. Write a C-program to find all prime factors of a positive integer.

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
    int num,i,ret;
    printf("enter the number: ");
    scanf("%d", &num);
    for (i=2;i<=num;i++){
        if(num%i==0){
            ret=primecheck(i);
            if(ret==1)
            printf("%d\n", i);
        }
    }
    return 0;
}

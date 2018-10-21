//24. Write a C-program to find the digital root of a number.
//(eg: 256->2+5+6=13->1+3=4)

#include<stdio.h>

int digiroot(int num){
    int sum=0,dig;
    while(num>0){
        dig=num%10;
        num/=10;
        sum+=dig;
    }
    if (sum>9){
        digiroot(sum);
    }
    else
    return sum;
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("the digital root of %d is %d", num, digiroot(num));
    return 0;
}

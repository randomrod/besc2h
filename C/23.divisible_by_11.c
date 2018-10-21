//23. Write a program to check whether a number is divisible by 11 or not
//(Sum of digits in odd positions should be equal to sum of digits in even positions. Eg: 121-> 1+1=2)

#include<stdio.h>
void div11check(int num){
    int pos=1,dig,evensum=0,oddsum=0;
    while(num>0){
        dig=num%10;
        num/=10;
        if (pos%2==0)
        evensum+=dig;
        else
        oddsum+=dig;
        pos++;
    }
    if (evensum==oddsum)
    printf("is divisble by 11\n");
    else
    printf("is not divisible by 11\n");
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("%d ", num);
    div11check(num);
    return 0;
}

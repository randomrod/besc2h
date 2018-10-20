//15. Write a program to reverse a number and check whether it is palindrome or not.

#include<stdio.h>

int main(){
    int dig,num,temp,reverse=0;
    printf("enter the number to be checked: ");
    scanf("%d", &num);
    temp=num;
    while(temp>0){
        dig=temp%10;
        reverse=reverse*10+dig;
        temp/=10;
    }
    if (reverse==num)
    printf("the number %d is a palindrome\n", num);
    else
    printf("the number %d is not a palindrome\n", num);
    return 0;
}

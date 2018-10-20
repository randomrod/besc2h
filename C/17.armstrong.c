//17. Write a program to find all Armstrong numbers within a given range.

#include<stdio.h>
#include<math.h>

int armstrongchecker(int num){
    int dig,armsum=0,temp;
    temp=num;
    while(num>0){
        dig=num%10;
        armsum=armsum+pow(dig,3);
        num/=10; 
    }
    if (armsum==temp)
    return 0;
}

int main(){
    int num,lowbound,upbound,i,ret;
    printf("enter the lower bound and upper bound of the range :");
    scanf("%d %d", &lowbound, &upbound);
    printf("the armstrong numbers between %d and %d are \n", lowbound,upbound);
    for(i=lowbound;i<=upbound;i++){
        ret=armstrongchecker(i);
        if (ret==0)
        printf("%d\n", i);
    }
    return  0;
}

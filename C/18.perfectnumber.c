//18. Write a program to display all the perfect numbers within a given range.

#include<stdio.h>

int perfectnochecker(int num){
    int i=1,sum=0;
    for (i=1;i<num;i++){
        if (num%i==0){
            sum=sum+i;
        }
    }
    if (num==sum)
    return 1;
}

int main(){
    int i,ret,lowbound,upbound;
    printf("enter the lower bound and upper bound of the range: ");
    scanf("%d %d", &lowbound, &upbound);
    printf("the perfect numbers between %d and %d are \n", lowbound, upbound);
    for (i=lowbound;i<upbound;i++){
        ret=perfectnochecker(i);
        if (ret==1)
        printf("%d\n", i);
    }
    return 0;
}

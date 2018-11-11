//25.c. Evaluate: (c) S = 1+1/2+1/3+1/4+……+1/n 

#include<stdio.h>

int main(){
    float i,n;
    printf("enter the value of 'n': ");
    scanf("%f", &n);
    double sum=0;
    for (i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%f\n", sum);
    return 0;
}

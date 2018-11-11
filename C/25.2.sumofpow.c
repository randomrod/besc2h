//25.b. Evaluate: (b) S = 1+x^1 + x^2+ x^3+ x^4 + ...........…+x^n

#include<stdio.h>
#include<math.h>

int main(){
    int i,n,x;
    printf("enter the value of 'x': ");
    scanf("%d", &x);
    printf("enter the value of 'n': ");
    scanf("%d", &n);
    int sum=0;
    for (i=0;i<=n;i++){
        sum=sum+(pow(x,i));
    }
    printf("%d\n", sum);
    return 0;
}

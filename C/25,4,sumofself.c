//25.d. Evaluate: (d) S = (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

int main(){
    int i,n,j;
    printf("enter the value of 'n': ");
    scanf("%d", &n);
    int sum=0;
    for (i=0;i<=n;i++){
        for (j=1;j<=i;j++){
            sum+=j;
        }
    }
    printf("%d\n", sum);
    return 0;
}

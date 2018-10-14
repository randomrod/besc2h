//8. Write a program to find out the roots of a quadratic equation and keep provision for imaginary root.

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d1,d2,alpha,beta,gamma,alphai,betai;
    printf("enter the values of coefficients: ");
    scanf("%f %f %f", &a, &b, &c);
    d1=pow(b,2)-(4*a*c);
    d2=(4*a*c)-pow(b,2);
    if (d1==0){
        gamma=(-b)/(2*a);
        printf("the root is %f\n", gamma);
    }
    else if(d1>0){
        alpha=((-b)+sqrt(d1))/(2*a);
        beta=((-b)-sqrt(d1))/(2*a);
        printf("the roots are %f and %f\n", alpha, beta);    
    }
    else if(d1<0){
        alphai=(-b)/(2*a);  
        betai=sqrt(d2)/(2*a);
        printf("the roots are %f + i%f and %f - i%f\n", alphai, betai, alphai, betai);
    }
    return 0;
}

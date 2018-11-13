/*27.b. Write C-Program to display the following structure with variable height.
      *
    * * *
  * * * * *
* * * * * * *...upto n rows */

#include<stdio.h>

int main(){
    int rows,space,i,k=0;
    printf("enter number of rows to be printed: ");
    scanf("%d", &rows);
    for (i=1;i<=rows;i++,k=0) {
        for (space=1;space<=rows-i;space++){
            printf("  ");
        }
        while (k!=2*i-1){
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0; 
}

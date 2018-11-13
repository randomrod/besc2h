/*27.c. Write C-Program to display the following structure with variable height.
              1
            1   1
          1   2   1
        1   3   3   1....upto n rows */

#include<stdio.h>

int main(){
    int rows,space,i,j,val=1;
    printf("enter number of rows to be printed: ");
    scanf("%d", &rows);
    for (i=0;i<rows;i++) {
        for (space=1;space<=rows-i;space++){
            printf("  ");
        }
        for (j=0;j<=i;j++){
            if (j==0 || i==0)
                val=1;
            else
                val=val*(i-j+1)/j;
            printf("%4d", val);
        }
        printf("\n");
    }
    return 0; 
}

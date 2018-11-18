#include<stdio.h>
#define size 150

void bubblesort(int array[], int n){
    int pass=0,j=0,flag=0,temp;
    for (pass=0;pass<n;pass++){
        for (j=0;j<n-pass-1;j++){
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;    
    }
}

int main(){
    int n,i,array[size];
    printf("enter the total number of elements to be inserted into the array: ");
    scanf("%d", &n);
    printf("enter the elements:\n");
    for (i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    printf("the unsorted array is: \n");
    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }

    bubblesort(array,n);
    printf("\nthe sorted array is:\n");

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

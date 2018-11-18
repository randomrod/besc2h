#include<stdio.h>
#define size 150

void selectionsort(int array[], int n){
    int i,j,small,pos;
    for (i=0;i<n;i++){
        small=array[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if (small>array[j]){
                small=array[j];
                pos=j;
            }
        }
        array[pos]=array[i];
        array[i]=small;
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

    selectionsort(array,n);
    printf("\nthe sorted array is:\n");

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

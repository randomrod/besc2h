#include<stdio.h>
#define size 150

void insertionsort(int array[], int n){
    int i,j,temp;
    for (i=1;i<n;i++){
        j=i-1;
        temp=array[i];
        while(j>=0 && temp<array[j]){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
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

    insertionsort(array,n);
    printf("\nthe sorted array is:\n");

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

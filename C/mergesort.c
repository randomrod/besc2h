#include<stdio.h>
#define size 150

void merge(int array[],int beg,int mid,int end);
void mergesort(int array[], int beg, int end){
    int mid;
    if (beg<end){
        mid=beg+(end-beg)/2;
        mergesort(array,beg,mid);
        mergesort(array,mid+1,end);
        merge(array,beg,mid,end);
    }
   
}

void merge(int array[],int beg,int mid,int end){
    int k,temp[size],i=beg,j=mid+1, index=beg;
    while ((i<=mid) && (j<=end)){
        if (array[i]>=array[j]){
            temp[index]=array[j];
            j++;
        }
        else{
            temp[index]=array[i];
            i++;
        }
        index++;
    }
    if (i>mid){
        while (j<=end){
            temp[index]=array[j];
            j++;
            index++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=array[i];
            i++;
            index++;
        }
    }
    for (k=beg;k<index;k++){
        array[k]=temp[k];
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

    mergesort(array,0,n-1);
    printf("\nthe sorted array is:\n");

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

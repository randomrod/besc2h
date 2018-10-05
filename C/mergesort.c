#include<stdio.h>
#include<stdlib.h>
#define size 1000
int merge(int array[], int beg, int mid, int end)
{
	int i=beg,j=mid+1,index,k=0,temp[size];
	index=0;
	while (i<=mid && j<=end)
	{
		if (array[i]<array[j])
		{
			temp[index]=array[i];
			i++;
		}
		else
		{
			temp[index]=array[j];
			j++;
		}
		index++;
	}
	if (i>mid)
	{
		while (j<=end)
		{
			temp[index]=array[j];
			j++;
			index++;
		}
	}
	else {
		while (i<=mid)
		{
			temp[index]=array[i];
			i++;
			index++;
		}
	}
	while (k<index){
		array[k]=temp[k];
		k++;
	}
}

int merge_sort(int array[], int beg, int end)
{
	int mid;
	if (beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(array, beg, mid);
		merge_sort(array, mid+1, end);
		merge(array, beg, mid, end);
	}
}

int main(){
	int i,n,array[size];
	printf("enter the number of elements to be stored in the array:\n");
	scanf("%d", &n);
	printf("enter the element of the array:\n");
	for (i=0;i<=n;i++){
		scanf("%d", &array[i]);
	}
	merge_sort(array,0,n-1);
	printf("the sorted array is:\n");
	for (i=0; i<n;i++){
		printf("%d\t", array[i]);
	}
}

#include<stdio.h>
#define size 100
#define print(x) printf("%d\n", x);

void insertele(int array[], int pos, int data, int currentarraylen){
	if (currentarraylen<=size){
		if (pos<=currentarraylen){
			while(i=currentarraylen-1;i>=pos-1;i--){
				array[currentarraylen-1]=array[currentarraylen];
				
			}
		}
		
	}
}

void initarray(int array[], int *arraylen){
	int i,n,data;
	printf("enter the total number of elements to be inserted");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		scanf("%d", &array[i]);
	}
	*arraylen= n;
}

int main(){
	int array[size],option,pos,data,currentarraylen=0;
	printf("1. Initilize array\n2. Insert\n3. Delete\n4. Display\n5. Exit\n");
	scanf("%d", &option);
	switch(option){
		case 1:
			initarray(array, &currentarraylen);
			//print(currentarraylen)
		case 2:
			printf("enter the position and data: ");
			scanf("%d %d", &pos, &data);
			//insertele(array[],pos, data);
	}
}

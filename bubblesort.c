#include<stdio.h>

void bubblesort(int a[])
{
	int pass, j, temp, flag=0;
	int len=5;
	for (pass=0; pass<len-1; pass++)
	{
		for (j=0; j<len-pass-1; j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				flag=1;
				a[j+1]=temp;
			}
		}
		if (flag==0)
		break;
	}
}

int main()
{
	int a[5], i, n;
	printf("enter the numbers");
	for(i=0; i<5; i++)
	{
		scanf("%d", &n);
		a[i] = n;
	}
	bubblesort(a);
    for(i=0; i<5; i++)
	{
		printf("%d", a[i]);
	}
}

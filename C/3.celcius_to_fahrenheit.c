#include<stdio.h>
#include<stdlib.h>
int main()
{
	float cel, fahr;
	char inp;
	printf("enter 'c' for converting from Celcius or 'f' for converting from Fahrenheit:\n");
	scanf("%c", &inp);
	if (inp=='c')
	{
		printf("celcius:");
		scanf("%f", &cel);
		fahr=((cel*1.8)+32);
    	printf("fahrenheit: %f \n", fahr);
	}
	else
	{
        printf("fahrenheit:");
		scanf("%f", &fahr);
		cel=((fahr-32)*(0.555556));
	 	printf("celcius: %f \n", cel);
	}
system("pause");
}

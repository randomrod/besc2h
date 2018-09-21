#include<stdio.h>
#include<math.h>
int main()
{
	float cel, far;
	char input;
	printf("would you like to enter Celcius value or Fahrenheit value? enter 'c' or 'f' accordingly:");
	scanf("%c", &input);
	if (input=='c')
	{
		printf("enter the celcius value:");
		scanf("%f", &cel);
		far=((cel*1.8)+32);
    	printf("%f", cel);
	}
	else (input=='f')
	{
		printf("enter the fahrenheit value:");
		scanf("%f", &far);
		cel=((far-32)*(9/5));
		printf("%f", far);
	}
	//printf("%c", input);
}


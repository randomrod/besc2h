#include<stdio.h>
float main()
{
	float cel, fahr;
	char inp;
	printf("enter 'c' for converting from Celcius or 'f' for converting from Fahrenheit:\n");
	scanf("%c", &inp);
	if (inp=='c')
	{
		printf("enter the celcius value:");
		scanf("%f", &cel);
		fahr=((cel*1.8)+32);
    	printf("%f", fahr);
	}
	else if (inp='f')
        {
        printf("enter the fahrenheit value:");
		scanf("%f", &fahr);
		cel=((fahr-32)*(0.555556));
	 	printf("%f", cel);
	}
	else
	{
		printf("input not recognised\ntry again?");
	}
}

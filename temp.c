#include <stdio.h>
int main()
{
	int ch;
	double c, f;
	printf("Enter 1 for Fahrenheit to Celcius\n");
	printf("Enter 2 for Celcius to Fahrenheit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		printf("Enter temperature in Fahrenheit.\n");
		scanf("%lf", &f);
		c = (f - 32) * (5.0 / 9.0);
		printf("Temperature in Celcius is %0.2lf.\n", c);
		break;
	case 2:
		printf("Enter temperature in Celcius.\n");
		scanf("%lf", &c);
		f = c * (9.0 / 5.0) + 32;
		printf("Temperature in Fahrenheit is %0.2lf.\n", f);
		break;
	default:
		printf("INVALID");
	}

	return 0;
}

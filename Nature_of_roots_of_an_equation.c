#include<stdio.h>
int main()
{
	float a,b,c;
	float x=0.0;
	printf("Enter the coefficient of x^2:\n");
	scanf("%f",&a);
	printf("Enter the coefficient of x:\n");
	scanf("%f",&b);
	printf("Enter the constant part:\n");
	scanf("%f",&c);
	x=(b*b)-(4*a*c);
	if (x > 0)
	printf("The roots are real and unequal.\n");
	else if (x == 0)
	printf("The roots are real and equal.\n");
	else
	printf("The roots are imaginary.\n");
	return 0;
}

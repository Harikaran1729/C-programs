//Celsius to fahrenheit
#include<stdio.h>
int main()
{
	int c;
	float f;
	printf("Enter temperature in celsius: ");
	scanf("%d", &c);
	f=(9/5)*c+32;
	printf("Temperature in fahrenheit is %f",f);
	return 0;
}


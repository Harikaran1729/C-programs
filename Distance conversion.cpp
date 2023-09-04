/*WAP to convert km to m, cm and mm*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter distance in kilometers: ");
	scanf("%d", &a);
	b=a*1000;
	c=100*b;
	d=10*c;
	printf("Distance in meters is %d", b);
	printf("\nDistance in centimeters is %d", c);
	printf("\nDistance in millimeters is %d", d);
	return 0;
}

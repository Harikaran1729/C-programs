//Factorial of a number
#include<stdio.h>
int main()
{
	int a,fac;
	printf("Enter a number: ");
	scanf("%d", &a);
	fac=1;
	for(int i=1;i<=a;i++)
		fac=fac*i;
	printf("Factorial of %d is %d",a,fac);
	return 0;
}

//Get a two-digit number from user and print sum the digits.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=(a-(a%10))/10+(a%10);
	printf("Sum of digits is %d",b);
	return 0;
}

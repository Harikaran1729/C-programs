//Get a three-digit number from user and print sum the digits.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=(a-(a%100))/100+(a%100-(a%10))/10+(a%10);
	printf("Sum of the digits is %d",b);
	return 0;
}

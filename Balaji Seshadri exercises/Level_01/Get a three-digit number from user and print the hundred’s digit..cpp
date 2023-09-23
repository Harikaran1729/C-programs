//Get a three-digit number from user and print the hundred’s digit.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=(a-a%100)/100;
	printf("Hundred's digit is %d",b);
	return 0;
}

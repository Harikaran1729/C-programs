//Get a two-digit number from user and print the one’s digit.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=a%10;
	printf("One's digit is %d",b);
	return 0;
}


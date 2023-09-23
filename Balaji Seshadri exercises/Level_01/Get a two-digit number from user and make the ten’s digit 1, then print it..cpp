//Get a two-digit number from user and make the ten’s digit 1, then print it.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two-digit number: ");
	scanf("%d", &a);
	b=10+a%10;
	printf("Required number is %d",b);
	return 0;
}

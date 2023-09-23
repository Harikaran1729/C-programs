//Get a number from user and divide by the number by 8 and print the remainder.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b=a%8;
	printf("Output is %d",b);
	return 0;
}

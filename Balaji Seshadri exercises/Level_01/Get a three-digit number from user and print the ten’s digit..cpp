//Get a three-digit number from user and print the ten’s digit.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=((a%100)-(a%10))/10;
	printf("Ten's digit is %d", b);
	return 0;
}

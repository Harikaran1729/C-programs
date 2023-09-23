//Get a two-digit number from user and print the reverse of the number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=(a%10)*10+(a-(a%10))/10;
	printf("Reversed two digit number is %d",b);
	return 0;
}


//Get a three-digit number from user and print the reverse of the number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=(a-(a%100))/100+((a%100)-(a%10))+(a%10)*100;
	printf("Reverses three digit number: %d",b);
	return 0;
}

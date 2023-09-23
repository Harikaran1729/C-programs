//Get a three-digit number from user and make the one’s digit as 2, then print it.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=2+a-a%10;
	printf("Required number is %d",b);
	return 0;
}

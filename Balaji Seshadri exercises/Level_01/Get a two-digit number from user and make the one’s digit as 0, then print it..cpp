//Get a two-digit number from user and make the one’s digit as 0, then print it.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit numner: ");
	scanf("%d", &a);
	b=a-a%10;
	printf("Required number is %d",b);
	return 0;
}

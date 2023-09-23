//Get a three-digit number from user and make the ten’s digit as 0, then print it.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d",&a);
	b=a-(a%100)+(a%10);
	printf("Required number is %d",b);
	return 0;
}

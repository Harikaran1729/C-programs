//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number: ");
	scanf("%d", &a);
	b=a%2;
	c=a-(b*5);
	printf("Required output is %d", c);
	return 0;
}


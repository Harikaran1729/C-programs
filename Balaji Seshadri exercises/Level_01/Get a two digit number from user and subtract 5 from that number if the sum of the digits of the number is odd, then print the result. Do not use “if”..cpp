//Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=((a%100-a%10)/10+(a%10))%2;
	c=a-(b*5);
	printf("Required output is %d",c);
	return 0;
}

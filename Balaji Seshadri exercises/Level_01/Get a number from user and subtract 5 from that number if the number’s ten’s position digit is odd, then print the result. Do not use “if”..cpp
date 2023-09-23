//Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=(((a%100)-(a%10))/10)%2;
	c=a-(b*50);
	printf("Required output is %d",c);
	return 0;
}

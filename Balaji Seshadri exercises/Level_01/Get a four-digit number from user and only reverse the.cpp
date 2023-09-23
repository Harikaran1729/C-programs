//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a four digit number: ");
	scanf("%d", &a);
	b=(a-(a%100))+((a%100)-(a%10))/10+(a%10)*10;
	printf("Required number is %d",b);
	return 0;
}

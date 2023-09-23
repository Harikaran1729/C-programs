//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a four digit number: ");
	scanf("%d", &a);
	b=(a%100)+(a-(a%1000))/10+((a%1000)-(a%100))*10;
	printf("Required number is %d",b);
	return 0;
}

//Get a three-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	b=(a%10)+(a%100)/10+(a/100);
	if (b==10)
	{
		printf("Output: Success");
	}
	else
	{
		printf("Output: Failure");
	}
	return 0;
}

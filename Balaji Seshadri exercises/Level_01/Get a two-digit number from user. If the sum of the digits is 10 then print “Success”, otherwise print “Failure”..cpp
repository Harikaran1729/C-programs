//Get a two-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=(a%10)+(a/10);
	if (b==10)
	{
		printf("Output : Success");
	}
	else
	{
		printf("Output : Failure");
	}
	return 0;
}

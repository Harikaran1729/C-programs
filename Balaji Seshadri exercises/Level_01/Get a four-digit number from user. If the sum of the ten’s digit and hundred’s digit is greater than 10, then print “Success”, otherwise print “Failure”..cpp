//Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is greater than 10, then print “Success”, otherwise print “Failure”.
#include<stdio.h>
int main()
{
	int a,tens,huns;
	printf("Enter a four digit number: ");
	scanf("%d",&a);
	tens=(a%100)/10;
	huns=(a/100)%10;
	if (tens+huns>10)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
	return 0;
}

//Get a three-digit number from user. If the sum of the one’s digit and hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.
#include<stdio.h>
int main()
{
	int a,ones,tens,huns;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	ones=a%10;
	tens=(a%100)/10;
	huns=(a/100);
	if (ones+huns<10)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
	return 0;
}

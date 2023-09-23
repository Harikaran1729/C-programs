//Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should be always single digit only.
#include<stdio.h>
int main()
{
	int a,b,c;
	int ones,tens,huns,sum;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	ones=a%10;
	tens=(a%100)/10;
	huns=(a/100);
	b=ones+tens+huns;
	sum=b;
	while(sum>=10)
	{
		ones=sum%10;
		tens=sum/10;
		sum=ones+tens;
	}
	printf("Output : %d",sum);
	return 0;
}

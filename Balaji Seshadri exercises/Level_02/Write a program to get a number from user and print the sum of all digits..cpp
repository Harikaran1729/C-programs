//Write a program to get a number from user and print the sum of all digits.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i=0;not (n/10==0);i++)
	{
		sum+=(n%10);
		n=n/10;
	}
	sum+=n;
	printf("Sum of digits is %d",sum);
	return 0;
}


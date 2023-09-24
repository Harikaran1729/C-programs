//Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter a number: ");
	scanf("%d", &num);
	n=num%100;
	int j=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
	if(j==0)
	{
		printf("Prime");
	}
	else
		printf("Not prime.");
	return 0;
}

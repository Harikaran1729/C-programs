//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
#include<stdio.h>
int main()
{
	int num,j=0,sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
			j++;
	}
	for(int i=0;not(num/10==0);i++)
	{
		sum+=(num%10);
		num=num/10;
	}
	sum+=num;
	if(j==0 && sum==14)
		printf("Prime & Sum of digits is 14.");
	else if(j!=0 && sum==14)
		printf("Not prime but sum of digits is 14.");
	else
		printf("Prime, but sum of digits is not 14.");
	return 0;
	
}

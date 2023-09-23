//Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=10;i<100;i++)
	{
		if(i/10==7 && i%2==1)
			sum+=i;
	}
	printf("Sum is %d",sum);
	return 0;
}

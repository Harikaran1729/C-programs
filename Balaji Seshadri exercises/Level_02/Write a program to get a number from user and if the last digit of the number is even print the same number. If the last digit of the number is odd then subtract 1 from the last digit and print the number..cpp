//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,num;
	printf("Enter a number: ");
	scanf("%d", &n);
	num=n;
	for(i=1;not(num/10==0);i++)
		num=num/10;
	if(n%2==0)
	{
		printf("Output: %d",n);
	}
	else
	{
		n=n-pow(10,(i-1));
		printf("Output: %d",n);
	}
	return 0;
}

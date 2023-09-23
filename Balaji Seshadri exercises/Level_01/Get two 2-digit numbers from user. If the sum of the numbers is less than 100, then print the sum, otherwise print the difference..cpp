//Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.
#include<stdio.h>
int main()
{
	int a,b,sum,diff;
	printf("Enter two 2-digit numbers: ");
	scanf("%d %d", &a, &b);
	sum=a+b;
	if (sum<100)
	{
		printf("%d",sum);
	}
	else
	{
		diff=a-b;
		printf("%d",diff);
	}
	return 0;
}

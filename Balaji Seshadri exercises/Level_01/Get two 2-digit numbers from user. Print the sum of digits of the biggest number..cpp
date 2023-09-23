//Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Enter two 2-digit numbers: ");
	scanf("%d %d", &a, &b);
	if (a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	sum=(b%10)+(b/10);
	printf("Output : %d",sum);
	return 0;
}

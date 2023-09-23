//Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two 3-digit numbers: ");
	scanf("%d %d", &a, &b);
	int o1,o2,t1,t2,h1,h2,sum1,sum2,sum;
	o1=a%10;
	o2=b%10;
	t1=(a%100)/10;
	t2=(b%100)/10;
	h1=(a/100);
	h2=(b/100);
	sum1=o1+h1;
	sum2=o2+h2;
	if (sum1>sum2)
	{
		sum=o1+t1+h1;
		printf("Output: %d",sum);
	}
	else
	{
		sum=o2+t2+h2;
		printf("Output: %d",sum);
	}
	return 0;
}

//print sum of first n natural number
#include<stdio.h>
int main()
{
	int sum=0,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		sum+=i;
	printf("Sum of first %d natural numbers is %d",n,sum);
}

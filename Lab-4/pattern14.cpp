//Pattern 14
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
			printf(" ");
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf(" ");
		for(s=0;s<i;s++)
			printf(" ");
		for(j=0;j<n-2*i+2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

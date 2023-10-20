#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("*");
			if(j==i)
			{
				for(int s=0;s<2*(n-i-1);s++)
					printf(" ");
				for(int k=0;k<i+1;k++)
					printf("*");	
			}	
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("*");
			if(j==n-i-1)
			{
				for(int s=0;s<2*i;s++)
					printf(" ");
				for(int k=0;k<n-i;k++)
					printf("*");
			}
		}
		printf("\n");
	}
}

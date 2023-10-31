//Pattern29
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			if(i%2==0)
				printf("*");
			else
				printf("-");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(s=0;s<i+1;s++)
			printf(" ");
		for(j=0;j<n-i-1;j++)
		{
			if(i%2==1)
				printf("*");
			else
				printf("-");
		}
		printf("\n");
	}
	return 0;
	
}

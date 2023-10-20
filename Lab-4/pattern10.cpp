#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
			printf("* ");
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
			printf("* ");
		printf("\n");
	}
}

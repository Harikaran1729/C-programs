//Pattern22
#include<stdio.h>
int main()
{
	int s=1,n,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	s=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j==i)
				printf("%d",s);
			else
				printf("%d*",s);
		}
		s++;
		printf("\n");
	}
	s--;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(j==n-i-1)
				printf("%d",s);
			else
				printf("%d*",s);
		}
		s--;
		printf("\n");
	}
	return 0;
}

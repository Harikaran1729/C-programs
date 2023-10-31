//Pattern21
#include<stdio.h>
int main()
{
	int s,n,i,j;
	printf("Enter starting number and number of rows: ");
	scanf("%d %d",&s,&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",s);
		}
		s++;
		printf("\n");
	}
	s--;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d ",s);
		}
		s--;
		printf("\n");
	}
	return 0;
}

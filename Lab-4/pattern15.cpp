//pattern 15
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
			printf("%d",i+1);
		printf("\n");
	}
	return 0;
}

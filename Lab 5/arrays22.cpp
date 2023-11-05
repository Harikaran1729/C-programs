//Addtion and subtraction of two matrices
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n],d[n][n];
	printf("Enter elements of A: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements of B: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]-b[i][j];
		}
	printf("Addtion of matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	printf("Subtraction of matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
	return 0;
}

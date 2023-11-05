//Multiplication of two matrices
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
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
			int sum=0;
			for(k=0;k<n;k++)
				sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	printf("Multiplcation of two matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}

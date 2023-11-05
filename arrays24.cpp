//Transpose of a matrices
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("Enter elements of A: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[j][i];
	printf("Transpose of given matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}		
	return 0;
} 	

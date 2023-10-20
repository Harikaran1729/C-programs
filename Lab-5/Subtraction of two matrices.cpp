//Subtraction of two matrices
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the number of rows and columns in the matrix: ");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n];
	printf("Enter the elements in the matrix 1: ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the elements in the matrix 2: ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			c[i][j]=a[i][j]-b[i][j];
	printf("Addtion of two matrix: \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");	
	}
	return 0;
}

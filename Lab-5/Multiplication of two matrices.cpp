//Multiplication of two matrices
#include<stdio.h>
int main()
{
	int m1,n1,m2,n2;
	printf("Enter the number of rows and columns in the matrix 1: ");
	scanf("%d %d",&m1,&n1);
	printf("Enter the number of rows and columns in the matrix 2: ");
	scanf("%d %d",&m2,&n2);
	int a[m1][n1],b[m2][n2],c[m1][n2];
	if(n1!=m2)
		printf("Multiplication of matrices is not possible!");
	else{
	printf("Enter the elements in the matrix 1: ");
	for(int i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter the elements in the matrix 2: ");
	for(int i=0;i<m2;i++)
		for(int j=0;j<n2;j++)
			scanf("%d",&b[i][j]);
	
	for(int i=0;i<m1;i++)
		for(int j=0;j<n2;j++)
			{
				int sum=0;
				for(int k=0;k<m1;k++)
					sum+=a[i][k]*b[k][j];
				c[i][j]=sum;
			}
	printf("Multiplication of two matrices: \n");
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n2;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	
}}

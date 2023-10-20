//WAP to print a 3X3 matrix
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the elements in the matrix: ");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
	{
		printf("|");
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("|\n");
	}
}

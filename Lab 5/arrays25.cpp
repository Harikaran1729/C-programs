//Sum of right diagonal of a matrix
#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter matrix elements: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		sum+=a[i][n-i-1];		
	printf("Sum of right diagonal matrix: %d",sum);
	return 0;
}

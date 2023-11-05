//Identity matrix
#include<stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter matrix elements: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
				flag=1;
	if(flag==0)
		printf("Given matrix is identity matrix.");
	else
		printf("Given matrix is not identity matrix.");
	return 0;
}

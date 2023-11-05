//Print 3x3 mattrix
#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("Enter array elements: ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("3x3 Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

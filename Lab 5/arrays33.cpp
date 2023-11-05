//Average of stream at every point
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],b[n]={};
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=0;j<i+1;j++)
			sum+=a[j];
		b[i]=sum/(i+1);
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}

//Find average of a[i] and x and find its frequency in the given array
#include<stdio.h>
int main()
{
	int n,x,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],b[n]={};
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		int c=(a[i]+x)/2;
		int count=0;
		for(j=0;j<n;j++)
			if(c==a[j])
				count++;
		b[i]=count;
	}
	printf("Output: ");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
}

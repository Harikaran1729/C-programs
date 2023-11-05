//Kth largest and smallest number in an array
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Enter k: ");
	scanf("%d",&k);
	printf("%d largest is %d",k,a[n-k]);
	printf("\n%d smallest is %d",k,a[k-1]);
	return 0;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

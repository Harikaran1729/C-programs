//Delete duplicate elements
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;j--;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

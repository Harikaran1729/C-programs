//Sum of pairs
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int sum,k,b=0;
	printf("Enter sum: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(k==(a[i]+a[j]))
			{
				printf("Pair: %d,%d",a[i],a[j]);
				b=1;
				break;
			}
			if(b==1)
				break;
		}
		if(b==1)
			break;
	}
	if(b==0)
		printf("No such pairs exist.");
	return 0;
}

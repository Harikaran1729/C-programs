//
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int sum,b=0;
	printf("Enter sum: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((a[i]+a[j]+a[k])==sum)
				{
					b=1;
					printf("Triplet: %d,%d,%d",a[i],a[j],a[k]);
					break;
				}
			}
			if(b==1)
				break;
		}
		if(b==1)
			break;
	}
	if(b==0)
		printf("No such triplet exist.");
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		int s;
		scanf("%d",&s);
		a[i]=abs(s);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			for(j=i+1;j<n;j++)
				if(a[i]==a[j])
					a[j]=-1;
			count++;
		}
	}
	printf("Number of absolute value: %d",count);
	return 0;
}

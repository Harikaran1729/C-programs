//Frequency of each element
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[j]=0;
			}
		}
		if(b[i]!=0)
		{
			b[i]=1;
			printf("%d - %d\n",a[i],count);
		}
	}
	return 0;
}

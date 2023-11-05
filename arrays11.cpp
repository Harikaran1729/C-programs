//First repeating element
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
	int b=0;
	for(i=0;i<n;i++)
	{
		int count;
		for(j=i+1;j<n;j++)
		{
			count=1;
			if(a[i]==a[j])
			{
				printf("Firsr repeating element is %d",a[j]);
				b=1;
				break;	
			}
		}
		if(b==1)
			break;
	}
	return 0;
}

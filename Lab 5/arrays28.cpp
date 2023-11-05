//Ceiling in a sorted array
#include<stdio.h>
int main()
{
	int n,i,x;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter a value: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x<a[i])
		{
			printf("ceiling of %d is: %d",x,a[i]);
			break;
		}	
	}
	return 0;
}

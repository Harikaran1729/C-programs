//seperate even and odd number into two diff arrays
#include<stdio.h>
int main()
{
	int n,i,p=0,q=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],odd[n]={},even[n]={};
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			even[p++]=a[i]; 
		else
			odd[q++]=a[i];
	}
	printf("Odd array: ");
	for(i=0;i<n;i++)
	{
		if(odd[i]!=0)
			printf("%d ",odd[i]);
	}
	printf("\nEven array: ");
	for(i=0;i<n;i++)
	{
		if(even[i]!=0)
			printf("%d ",even[i]);
	}
	return 0;
}

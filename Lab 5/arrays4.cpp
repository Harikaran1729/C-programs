//Interchange alternate elements
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i+=2)
	{
		int t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

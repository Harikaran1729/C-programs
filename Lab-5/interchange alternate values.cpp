//WAP interchange alternate elements
#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter integers: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i+=2)
	{
		a[i]=a[i]+a[i+1];
		a[i+1]=a[i]-a[i+1];
		a[i]=a[i]-a[i+1];
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	
}

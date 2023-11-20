#include<stdio.h>
int avg(int a[100],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	return sum/n;
}
int main()
{
	int n;
	printf("Enter number on array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",avg(a,n));
	return 0;
}

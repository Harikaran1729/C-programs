#include<stdio.h>
int main()
{
	int n,i,p,val;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter value to be inserted: ");
	scanf("%d",&val);
	printf("Enter position: ");
	scanf("%d",&p);
	for(i=n;i>p;i--)
		a[i]=a[i-1];
	a[p]=val;
	printf("Array after inserting: ");
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}

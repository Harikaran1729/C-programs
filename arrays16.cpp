//Copy elements to another array
#include<stdio.h>
int main()
{
	int n,i;
	int a[]={1,2,3,4,5,6};
	n=sizeof(a)/sizeof(a[0]);
	int b[n];
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}

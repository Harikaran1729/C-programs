//Occurence of a number
#include<stdio.h>
int main()
{
	int n,i,k,count=0;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter k: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
		if(a[i]==k)
			count++;
	printf("Occurence of %d is %d",k,count);
	return 0;
}

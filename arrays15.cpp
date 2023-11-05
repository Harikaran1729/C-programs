//Majority element
#include<stdio.h>
int main()
{
	int n,i,j,b;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				count++;
		if(count>(n/2))
		{
			printf("Majority element is %d",a[i]);
			b=1;
			break;
		}
	}
	if(b!=1)
		printf("No majority element exists.");
	return 0;
}

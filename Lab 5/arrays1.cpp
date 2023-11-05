#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max=0,min=a[0];
	float sum=0,avg;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		sum+=a[i];
	}
	avg=sum/n;
	printf("Maximum is %d",max);
	printf("\nMinimum is %d",min);
	printf("\nAverage is %f",avg);
	return 0;
}

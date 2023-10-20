//WAP to find min, max and average value of unsorted array
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
	int max=a[1],min=a[1],sum=0;
	float avg;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	avg=sum/5;
	printf("\nMaximun value in the array is %d\nMinimum value in the array is %d\nAverage of intergers is %0.1f",max,min,avg);
}

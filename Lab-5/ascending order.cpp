//WAP to sort in ascending order
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integers: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				//Swap a[i] and a[j]
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	printf("Elements in ascending order: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

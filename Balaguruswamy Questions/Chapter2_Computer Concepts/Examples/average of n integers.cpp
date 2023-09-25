//Average of n intergers
#include<stdio.h>
int main()
{
	int sum=0,a,n;
	float avg;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a number: ");
		scanf("%d", &a);
		sum+=a;
	}
	avg=sum/n;
	printf("Average of numbers is %f",avg);
	return 0;
}

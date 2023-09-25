//Fibonacci series
#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	printf("Enter how many numbers you want to print in fibonacci series: ");
	scanf("%d",&n);
	printf("0 1 ");
	for(int i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}

//Factors of a number
#include<stdio.h>
int main()
{
	int n,a,b;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factors of %d are 1 ",n);
	for(int i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
			printf("%d ",i);
		}
	}
	printf("%d",n);
	return 0;
}

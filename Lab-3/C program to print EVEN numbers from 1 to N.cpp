//C program to print EVEN numbers from 1 to N.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of N: ");
	scanf("%d",&n);
	printf("Even numbers from 1 to %d are ",n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	return 0;
}

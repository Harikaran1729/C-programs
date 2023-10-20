//WAP to print odd numbers from 1 to N
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Odd numbers from 1 to %d:",n );
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
			printf("\n%d",i);
	}	
}

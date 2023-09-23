//Write a loop program to print sum of 6 to 1.
#include<stdio.h>
int main()
{
	int sum=0,i;
	for(i=6;i>0;i--)
	{
		sum+=i;
	}
	printf("Sum is %d",sum);
	return 0;
}


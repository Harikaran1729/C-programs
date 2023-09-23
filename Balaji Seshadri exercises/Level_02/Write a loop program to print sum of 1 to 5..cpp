//Write a loop program to print sum of 1 to 5.
#include<stdio.h>
int main()
{
	int sum,i;
	for(i=1;i<6;i++)
	{
		sum+=i;
	}
	printf("Sum is %d",sum);
	return 0;
}

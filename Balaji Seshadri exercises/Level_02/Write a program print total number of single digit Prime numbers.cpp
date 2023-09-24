//Write a program print total number of single digit Prime numbers
#include<stdio.h>
int main()
{
	int n,total=0;
	for(n=2;n<10;n++)
	{
		int j=0;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
				j++;
		}
		if(j==0)
			total++;
	}
	printf("%d",total);
	return 0;
}

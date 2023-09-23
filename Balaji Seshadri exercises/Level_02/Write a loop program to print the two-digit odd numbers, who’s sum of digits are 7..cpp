//Write a loop program to print the two-digit odd numbers, who’s sum of digits are 7.
#include<stdio.h>
int main()
{
	for(int i=1,j,num;i<8;i++)
	{
		if(i%2==0)
		{
			j=7-i;
			num=i*10+j;
			printf("%d\n",num);
		}
	}
	return 0;
}

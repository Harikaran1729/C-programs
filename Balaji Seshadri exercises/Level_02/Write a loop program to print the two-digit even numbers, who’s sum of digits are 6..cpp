//Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.
#include<stdio.h>
int main()
{
	int i,j,num;
	for(i=1;i<8;i++)
	{
		if(i%2==0)
		{
			j=6-i;
			num=10*i+j;
			printf("%d\n",num);
		}
	}
	return 0;
}

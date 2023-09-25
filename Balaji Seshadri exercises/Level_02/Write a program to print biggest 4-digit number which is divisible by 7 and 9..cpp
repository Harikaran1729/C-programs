//Write a program to print biggest 4-digit number which is divisible by 7 and 9.
#include<stdio.h>
int main()
{
	int num;
	for(int i=1000;i<10000;i++)
	{
		if(i%7==0 && i%9==0)
		{
			num=i;
		}
	}
	printf("Greatest number divisible by both 7 and 9 is %d",num);
	return 0;
}

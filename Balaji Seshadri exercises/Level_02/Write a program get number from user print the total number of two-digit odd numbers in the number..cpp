//Write a program get number from user print the total number of two-digit odd numbers in the number.
#include<stdio.h>
int main()
{
	int num,count=0,m;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=0;not(num/10==0);i++)
	{
		m=num%10;
		if(m%2==1)
			count++;
		num=num/10;
	}
	printf("Output: %d",count);
	return 0;
}

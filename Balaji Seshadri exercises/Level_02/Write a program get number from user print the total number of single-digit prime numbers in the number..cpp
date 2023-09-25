//Write a program get number from user print the total number of single-digit prime numbers in the number.
#include<stdio.h>
int main()
{
	int num,count=0,n;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=0;not(num/10==0);i++)
	{
		n=num%10;
		if(n==2||n==3||n==5||n==7)
			count++;
		num=num/10;
	}
	if(num==2||num==3||num==5||num==7)
		count++;
	printf("Output: %d",count);
	return 0;
}

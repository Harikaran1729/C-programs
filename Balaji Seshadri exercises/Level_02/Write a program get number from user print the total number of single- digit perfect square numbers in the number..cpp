//Write a program get number from user print the total number of single- digit perfect square numbers in the number.
#include<stdio.h>
int main()
{
	int num,count,m;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=0;not(num/10==0);i++)
	{
		m=num%10;
		if(m==1 || m==4 || m==9)
			count++;
		num=num/10;
	}
	if(num==1 || num==4 || num==9)
		count++;
	printf("Output: %d",count);
	return 0;
}

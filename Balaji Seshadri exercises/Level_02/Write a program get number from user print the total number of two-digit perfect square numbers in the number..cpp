//Write a program get number from user print the total number of two-digit perfect square numbers in the number.
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=0;not(num/10==0);i++)
	{
		int n;
		n=(num%100);
		if(n==1||n==4||n==9||n==16||n==25||n==36||n==49||n==64||n==81)
			count++;
		num=num/10;
	}
	printf("Output: %d",count);
	return 0;
}

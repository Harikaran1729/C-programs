//Write a program to get a number from user print the total number of digits in that number
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;not (n/10==0);i++)
	{
 		n=n/10;  
	}
	printf("Number of digits is %d",i);
	return 0;
}

//Write a program to get a number from user and print the reverse of that number
#include<stdio.h>
int main()
{
	int n,rev;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(not (n/10==0))
	{
		rev+=(n%10);
		rev*=10;
	}
	rev+=n;
	printf("Reversed number is %d",rev);
	return 0;
}

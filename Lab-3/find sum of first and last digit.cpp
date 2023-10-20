//find sum of first and last digit.
#include<stdio.h>
int main()
{
	int n,f,l,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	f=n%10;
	do{
		if(n<10)
			l=n;
		n/=10;
	} while(n!=0);
	sum=f+l;
	printf("Sum of first and last digits is %d",sum);
	return 0;
}

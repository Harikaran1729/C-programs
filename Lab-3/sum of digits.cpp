//Sum of digits
#include<stdio.h>
int main()
{
	int n,num,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	do{
		sum+=n%10;
		n/=10;
	} while(n!=0);
	printf("Sum of digits of %d is %d",num,sum);
	return 0;
}

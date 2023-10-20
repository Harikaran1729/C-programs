//decimal to binary conversion
#include<stdio.h>
int main()
{
	int n,bn,num;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	do{
		bn+=n%2;
		n/=2;
		bn*=10;
	} while(n!=0);
	printf("Binary numebr of %d is %d",num,bn/10);
	return 0;
}

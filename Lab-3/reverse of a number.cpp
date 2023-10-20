//Reverse of a number
#include<stdio.h>
int main()
{
	int n,num,rn=0;
	printf("Enter n: ");
	scanf("%d",&n);
	num=n;
	do{
		rn+=n%10;
		n/=10;
		rn*=10;
	} while(n!=0);
	printf("Reverse of %d is %d",num,rn/10);
	return 0;
}

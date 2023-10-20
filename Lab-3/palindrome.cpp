//Palindrome
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
	if(num==rn/10)
		printf("%d is a palindrome",num);
	else
		printf("%d is not a palindrome",num);
	return 0;
}

//Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.
#include<stdio.h>
int main()
{
	int n,num,j=0;
	printf("Enter a four digit number: ");
	scanf("%d", &num);
	n=(num%1000)/10;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			j++;
	}
	if(j==0)
		printf("Prime");
	else
		printf("Not prime");
	return 0;
}

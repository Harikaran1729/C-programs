//Write a program to get two numbers from user and print the HCF of those numbers.
#include<stdio.h>
int main()
{
	int a,b,c,hcf;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	if(a>b)
		c=b;
	else
		c=a;
	for(int i=1;i<=c;i++)
	{
		if(a%i==0 && b%i==0)
			hcf=i;
	}
	printf("HCF(%d,%d)=%d",a,b,hcf);
	return 0;
}

//WAP to print maximum point value//
#include<stdio.h>
int main()
{
	int a,c,b;
	printf("Enter three point values: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b&&a>c)
	{
		printf("%d",a);
	}
	else if(b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
}

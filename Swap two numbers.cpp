/*WAP to swap two numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("Value of a is %d and value of b is %d", a, b);
	return 0;
}


/*WAP to swap two numbers without using third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d", &b);
	a=b;
	b=a;
	printf("Value of a is %d and value of b is %d", a, b);
	return 0;
}

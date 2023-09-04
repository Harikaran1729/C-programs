/*Write a C program to perform all arthimetic operations*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("\nSum of the two numbers is %d",c);
	printf("\nDifference of the two numbers is %d",d);
	printf("\nMultiplication of the two numbers is %d",e);
	printf("\nDivision of the two numbers is %d",f);
	return 0;
}

/*WAP to find greatest of three numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	{
		printf("The gretest number is %d",a);
	}
	else if (b>c)
	{
		printf("The gretest number is %d",b);
	}
	else
	{
		printf("The gretest number is %d",c);
	}
}

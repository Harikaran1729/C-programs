//WAP to find triangle is equilateral, isosceles or scalene//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides of the triangle: ");
	scanf("%d %d %d", &a, &b ,&c);
	if(a==b && b==c && c==a)
	{
		printf("Equilateral");
	}
	else if(a==b || b==c || c==a)
	{
		printf("Isoceles");
	}
	else
	{
		printf("Scalene");
	}
	return 0;
}

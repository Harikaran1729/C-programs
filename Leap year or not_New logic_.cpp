//WAP to find leap year or not//
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a year: ");
	scanf("%d",&a);
	if(a%4==0&&(a%100!=0||a%400==0))
	{
		printf("It is leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
}

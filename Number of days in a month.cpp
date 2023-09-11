//WAP to print number of days in a month//
#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter year: ");
	scanf("%d", &y);
	printf("Enter month: ");
	scanf("%d", &m);
	if(m==1 && m==3 && m==5 && m==7 && m==8 && m==10 && m==12)
	{ printf("Number of days is %d", 31); }
	else if(m==4 && m==6 && m==9 && m==11)
	{ printf("Number of days is %d", 30); }
	else
	{
		if(y%4==0 && (y%100!=0 || y%400==0))
		{
			printf("Number of days is %d", 29);
		}
		else
		{
			printf("Number of days is %d", 28);
		}
	}
}

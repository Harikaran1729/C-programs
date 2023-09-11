//WAP to input day number and print weekday//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter weekday: ");
	scanf("%d", &a);
	b=a%7;
	if(b==1)
	{ printf("Monday"); }
	else if(b==2)
	{ printf("Tuesday"); }
	else if(b==3)
	{ printf("Wednesday"); }
	else if(b==4)
	{ printf("Thursday"); }
	else if(b==5)
	{ printf("Friday"); }
	else if(b==6)
	{ printf("Saturday"); }
	else if(b==0)
	{ printf("Sunday"); }
	return 0;
}

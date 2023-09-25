//Write a program to get two numbers from user and print the LCM of those numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	if(a>b)
		c=a;
	else
		c=b;
	for(int i=c;1<2;i++)
	{
		if(not(i%a==0 && i%b==0))
		{
			continue;
		}
		else
		{
			printf("LCM of %d and %d is %d",a,b,i);
			break;
		}
	}
	return 0;
}

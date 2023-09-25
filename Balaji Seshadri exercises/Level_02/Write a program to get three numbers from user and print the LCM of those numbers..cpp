//Write a program to get three numbers from user and print the LCM of those numbers.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		d=a;
	else if(b>c)
		d=b;
	else
		d=c;
	for(int i=d;1<2;i++)
	{
		if(not(i%a==0 && i%b==0 && i%c==0))
			continue;
		else
		{
			printf("LCM(%d,%d,%d)=%d",a,b,c,i);
			break;
		}
	}
	return 0;
}

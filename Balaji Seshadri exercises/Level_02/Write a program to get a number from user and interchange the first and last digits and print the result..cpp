//Write a program to get a number from user and interchange the first and last digits and print the result.
#include<stdio.h>
#include<math.h>
int main()
{
	int i,num,n,f,l;
	printf("Enter a number: ");
	scanf("%d", &num);
	l=num%10;
	n=num;
	for(i=1;not (n/10==0);i++)
	{
		n=n/10;
	}
	f=n;
	num=num-l+f;
	num=num-(f-l)*pow(10,(i-1));
	printf("Required number is %d",num);
	return 0;
}

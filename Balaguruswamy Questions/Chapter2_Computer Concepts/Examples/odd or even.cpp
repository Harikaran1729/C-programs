//WAP to check odd or even
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a%2==0)
		printf("%d is even",a);
	else
		printf("%d is odd",a);
	return 0;
}

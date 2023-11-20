#include<stdio.h>
int gcd(int a,int b)
{
	int r=b%a;
	if(r==0)
		return a;
	else
		return gcd(r,a);
}
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("GCD(%d,%d)=%d",a,b,gcd(a,b));
	return 0;
}

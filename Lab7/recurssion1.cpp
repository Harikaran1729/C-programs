#include<stdio.h>
int nterm(int a,int b,int c,int n)
{
	if (n==1)
		return a;
	else if (n==2)
		return b;
	else if (n==3)
		return c;
	else
		return nterm(a,b,c,n-1)+nterm(a,b,c,n-2)+nterm(a,b,c,n-3);
}
int main()
{
	int a,b,c,n;
	printf("Enter first three terms of the series: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d term of the series: %d",n,nterm(a,b,c,n));
	return 0;
}


//program to convert binary number to decimal number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,dn=0,p=0;
	printf("Enter a binary number: ");
	scanf("%d",&n);
	do{
		dn+=(n%2)*pow(2,p);
		++p;
		n/=10;
	} while(n!=0);
	printf("Decimal number: %d",dn);
	return 0;
}

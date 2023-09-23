//Get a two-digit number from user and print the ten’s digit.
#include<Stdio.h>
int main()
{
	int a,b;
	printf("Enter a two digit number: ");
	scanf("%d", &a);
	b=(a-(a%10))/10;
	printf("Ten's digit is %d",b);
	return 0;
}

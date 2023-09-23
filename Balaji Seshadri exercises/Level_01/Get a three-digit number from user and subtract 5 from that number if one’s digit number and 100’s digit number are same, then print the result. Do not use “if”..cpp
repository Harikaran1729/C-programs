//Get a three-digit number from user and subtract 5 from that number if one’s digit number and 100’s digit number are same, then print the result. Do not use “if”.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a three digit number: ");
	scanf("%d", &a);
	int ones,hundreds,tens;
	ones=a%10;
	hundreds=a/100;
	b= (ones==hundreds);
	printf("%d\n",&b);
	c=a-(5*b);
	printf("Required output is %d",c);
	return 0;
}

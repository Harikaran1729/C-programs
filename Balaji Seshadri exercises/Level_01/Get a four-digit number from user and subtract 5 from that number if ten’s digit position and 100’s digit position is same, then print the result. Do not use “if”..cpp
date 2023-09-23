//Get a four-digit number from user and subtract 5 from that number if ten’s digit position and 100’s digit position is same, then print the result. Do not use “if”.
#include<stdio.h>
int main()
{
	int a,b,c,tens,huns;
	printf("Enter a four digit number: ");
	scanf("%d", &a);
	tens=(a%100)%10;
	huns=(a/1000)%10;
	b=(tens==huns);
	c=a-(b*5);
	printf("Required output is %d",c);
	return 0;
}

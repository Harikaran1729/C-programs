//Get two 3-digit numbers from user. Print the difference between the one’s digit and hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit
#include<stdio.h>
int main()
{
	int a,b,diff;
	printf("Enter two 3-digit numbers: ");
	scanf("%d %d", &a, &b);
	int ones1,tens1,huns1,ones2,tens2,huns2;
	ones1=a%10;
	ones2=b%10;
	tens1=(a%100)/10;
	tens2=(b%100)/10;
	huns1=(a/100);
	huns2=(b/100);
	if (tens1>tens2)
	{
		diff=ones1-huns1;
	}
	else
	{
		diff=ones2-huns2;	
	}
	printf("Output : %d",diff);
	return 0;
}

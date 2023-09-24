//Write a program get number from user print the total number digits which are odd in the number.
#include<stdio.h>
int main()
{
	int n,total=0,m;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i=0;not(n/10==0);i++)
	{
		m=n%10;
		n=n/10;
		if(m%2==1)
			total++;
	}
	if(n%2==1)
		total++;
	printf("Output: %d",total);
	return 0;
}

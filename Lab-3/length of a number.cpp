//length of a number
#include<stdio.h>
int main()
{
	int n,count=0,num;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	do{
		n/=10;
		count+=1;
	} while(n!=0);
	printf("Length of %d is %d",num,count);
	return 0;
}

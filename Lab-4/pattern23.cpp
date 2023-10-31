//pattern23
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		if(i%2==0){
		for(j=0;j<n+1;j++)
		{
			if(j!=n)
				printf("%d",i+1);
			else
				printf("%d",i+2);
		}}
		else{
		for(j=0;j<n+1;j++)
		{
			if(j==0)
				printf("%d",i+2);
			else
				printf("%d",i+1);
		}}
		printf("\n");
	}
}

//pattern25
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter value of n: ");
	scanf("%d",&n);
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
			printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}

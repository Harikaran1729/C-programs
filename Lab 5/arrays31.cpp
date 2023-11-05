//Sum of both numbers in a array
#include<stdio.h>
int main()
{
	int n,i,j,k,flag;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter k: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])%k!=0)
				flag=1;
			else 
				flag=0;
		}
	if(flag==0)
		printf("True");
	else
		printf("False");
	return 0;
}

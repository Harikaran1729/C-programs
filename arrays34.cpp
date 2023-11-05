//Balance an array
#include<stdio.h>
int main()
{
	int n,i,dif,sum1=0,sum2=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i<(n+1)/2)
			sum1+=a[i];
		else
			sum2+=a[i];
	}
	dif=sum1-sum2;
	if(dif<0)
		printf("We can add %d to any element in the first half",-dif);
	else if(dif>0)
		printf("We can add %d to any element in the second half",dif);
	else
		printf("The array is already balanced.");
}

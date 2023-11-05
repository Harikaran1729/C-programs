//missing number in [1,n]
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	int a[n--];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b[n+1]={0};
	for(i=0;i<=n;i++)
		b[a[i]-1]=1;
	int ans;
	for(i=0;i<=n;i++)
		if(b[i]==0)
			ans=i+1;
	printf("%d",ans);	
	return 0;
}

//most and least repeated
#include<stdio.h>
int main()
{
	int i,j,k,n=0;
	char str[100];
	int a[100]={0};
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		n++;
	for(i=0;i<n;i++)
	{
		int count=1;
		if(a[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
			if(str[i]==str[j])
				count++;
			a[j]=-1;
			}
			a[i]=count;
		}
		count=0;
	}
	for(i=0;i<n;i++)
		if(a[i]!=-1)
			printf("%c - %d\n",str[i],a[i]);
	return 0;
}

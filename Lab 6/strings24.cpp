//frequency of characters from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter string: ");
	gets(a);
	int i,j,n=strlen(a);
	for(i=0;i<n;i++)
	{
		int flag=0;
		int count=1;
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}	
		if(flag==1)
			continue;
		for(j=0;j<i;j++)
			if(a[i]==a[j])
				count++;
		printf("%c %d\n",a[i],count);
	}
}

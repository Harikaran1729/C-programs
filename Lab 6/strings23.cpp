//frequency of characters from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a string: ");
	gets(a);
	int b[100]={0};
	int i,j,n=strlen(a);
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) {
				count++;
				a[j]='\0';
			}
		}
		b[i]=count;
	}
	for(i=0;i<n;i++)
		if(a[i]!='\0' && (a[i]<'0' || a[i]>'9'))
			printf("%c - %d\n",a[i],b[i]);
	return 0;
}

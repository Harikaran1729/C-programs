//capitalise first letter of each word
#include<stdio.h>
int main()
{
	int i,c=1;
	char a[100];
	printf("Enter the string:");
	gets(a);
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			c=1;
			continue;
		}
		else if(a[i]<='A' && a[i]>='Z')
			continue;
		else if(c==1)
			a[i]-=32;
		c=0;
	}
	printf("%s",a);
}

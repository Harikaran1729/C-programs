//sort characters in dictionary order
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string in small case: ");
	gets(str);
	int n=strlen(str),i,j;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
			if(str[i]>str[i+1])
			{
				char t=str[i];
				str[i]=str[i+1];
				str[i+1]=t;
			}
	}
	printf("Sorted string: %s",str);
	return 0;
}

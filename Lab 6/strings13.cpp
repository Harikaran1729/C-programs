//frequency of the in the string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int n=strlen(str),count=0;
	for(int i=0;i<n-2;i++)
	{
		if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e')
			count++;
	}
	printf("Frequency of 'the': %d",count);
	return 0;
}

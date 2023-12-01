//delete vowel in a string
#include<stdio.h>
#include<string.h>
void vowel(char str[100],int n,int k)
{
	for(int i=k;i<n;i++)
	{
		str[i]=str[i+1];
	}
}
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int n=strlen(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			vowel(str,n--,i);
	}
	for(int i=0;i<n;i++)
		printf("%c",str[i]);
	return 0;
}

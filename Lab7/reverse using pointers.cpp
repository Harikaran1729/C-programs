#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int n=strlen(str);
	for(int i=0;i<strlen(str);i++)
		printf("%c",*(str+n-i-1));
	return 0;
}

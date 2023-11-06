//Compare two strings and say whether they are equal or not
#include<stdio.h>
int main()
{
	char s1,s2;
	printf("Enter character 1: ");
	scanf("%s",&s2);
	printf("Enter character 2: ");
	scanf("%s",&s1);
	if(s1==s2)
		printf("Given strings are equal");
	else
		printf("Given strings are not equal");
	return 0;
}

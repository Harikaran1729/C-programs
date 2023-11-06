//strlen
#include<stdio.h>
int main()
{
	char str[100];
	int i,len=0;
	printf("Enter string: ");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
		len++;
	printf("Length of the given string is %d",len);
	return 0;
}

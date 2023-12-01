//count of number of words in a string
#include<stdio.h>
int main()
{
	char str[200];
	int i,count=1;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		if(str[i]!=' ')
			break;
	for(i;str[i]!='\0';i++)
		if(str[i]==' ')
			count++;
	printf("Number of words: %d",count);
	return 0;
}

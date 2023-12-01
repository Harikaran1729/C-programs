//print first capital letter
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int i,flag=0,n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			printf("First capital letter: %c",str[i]);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("No capital letter in the string");
	return 0;
}

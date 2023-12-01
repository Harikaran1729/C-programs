//Pangram
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b[26]={0},i,j,flag=0;
	printf("Enter string: ");
	gets(a);
	strlwr(a);
	for(i=0;a[i]!='\0';i++)
		if(a[i]>='a' && a[i]<='z')
			b[int(a[i]-'a')]++;
	for(i=0;i<26;i++)
		if(b[i]==0)
		{
			printf("Given string is not a pangram");
			flag=1;
			break;
		}
	if(flag==0)
		printf("Given string is a pangram");
	return 0;
}

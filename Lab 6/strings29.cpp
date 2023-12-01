//anagram
#include<stdio.h>
#include<string.h>
void sort(char a[100])
{
	int i,j,n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				char t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	char s1[100],s2[100];
	printf("Enter string1: ");
	gets(s1);
	printf("Enter string2: ");
	gets(s2);
	strlwr(s1);
	strlwr(s2);
	if(strlen(s1)!=strlen(s2))
		printf("Not an anagram!");
	else{
		int flag=0;
		sort(s1);
		sort(s2);
		for(int i=0;i<strlen(s1);i++)
		{
			if(s1[i]!=s2[i])
			{
				printf("Not an anagram!");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("Anagram!");
			
	}
	return 0;
}

//Insert new character
#include<stdio.h>
int main()
{
	int k;
	char str[100],ch;
	printf("Enter string: ");
	scanf("%[^\n]",str);
	printf("Enter character: ");
	scanf("%s",&ch);
	printf("Enter position: ");
	scanf("%d",&k);
	int n=0,i=0;
	while(str[i]!='\0')
	{
		i++;n++;
	}
	i=n;
	//printf("%d",n);
	while(i!=k-1)
	{
		str[i]=str[i-1];
		i--;
	}
	str[k-1]=ch;
	printf("%s",str);
	return 0;
}

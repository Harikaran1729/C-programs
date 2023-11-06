//Reverse string
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	int n=0,i;
	for(i=0;str[i]!='\0';i++)
		n++;
	for(i=0;i<n/2;i++)
	{
		char t=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=t;
	}
	printf("Reversed string: %s",str);
	return 0;
}

//Palindrome
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s",str);
	int n=0,flag=1;
	for(int i=0;str[i]!='\0';i++)
		n++;
	for(int i=0;i<n/2;i++)
		if(str[i]!=str[n-i-1])
			flag=0;
	if(flag==1)
		printf("Palindrome");
	else
		printf("Not a palindrome");
	return 0;
}

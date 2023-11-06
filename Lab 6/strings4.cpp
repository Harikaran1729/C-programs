//Uppercase to lowercase
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++)
		if(str[i]>96)
			str[i]=str[i]-32;
	printf("Uppercase: %s",str);
}

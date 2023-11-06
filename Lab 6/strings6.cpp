//First occurence of a character
#include<stdio.h>
int main()
{
	char str[100],c;
	printf("Enter a string: ");
	scanf("%s",str);
	printf("Enter a character: ");
	scanf("%s",&c);
	int i;
	for(i=0;!(str[i]==c);i++);
	if(i==c)
		printf("First occurence of the character is %d",i+1);
	else
		printf("Not exists in the given string.");
	return 0;
}

//Print vowels in the given string
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter character: ");
	scanf("%[^\n]",str);
	printf("Vowels present: ");
	for(int i=0;str[i]!='\0';i++)
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
			printf("%c",str[i]);
	return 0;
}

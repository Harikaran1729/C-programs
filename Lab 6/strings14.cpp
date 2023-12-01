//Count of vowels,consonants,digits and white space
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int v=0,c=0,d=0,s=0;
	strupr(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='I' || str[i]=='U')
			v++;
		else if(str[i]==' ')
			s++;
		else if(str[i]>='0' && str[i]<='9')
			d++;
		else
			c++;
	}
	printf("Consonants: %d",c);
	printf("\nVowels: %d",v);
	printf("\nDigits: %d",d);
	printf("\nWhite space: %d",s);
	return 0;
}

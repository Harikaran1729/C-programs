//strncat
#include<stdio.h>
int main()
{
	char str1[25],str2[25];
	int i=0,j=0;
	printf("Enter first string: ");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	while(str1[i]!='\0')
		i++;
	while(str2[j]!='\0')
	{
    	str1[i]=str2[j];
    	j++;
    	i++;
  	}
	str1[i]='\0';
	printf("Concatenated string is %s",str1);
}

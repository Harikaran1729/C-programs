//First non-repeating character
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter string: ");
	gets(a);
	int i,j,flag;
	for(i=0;i<strlen(a);i++)
	{
		flag=0;
		for(j=0;j<strlen(a);j++)
		{
			if(j==i)
				continue;
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}	
		}
		if(flag==0){
			printf("First non-repeating character: %c",a[i]);
			break;
		}
	}
	if(flag==1)
		printf("There is no non-repeating character in the given string");
	return 0;
}

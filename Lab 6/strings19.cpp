//sort words in a string
#include<stdio.h>
void sort(char str[100],int n,int e)
{
	for(int i=n;i<e-1;i++)
	{
		for(int j=n;j-n<2*n-e-i-1;j++)
			if(str[j]>str[j+1])
			{
				char t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
	}
}
int main()
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	int i,j,n,e;
	for(i=0;i!='\0';i++)
	{
		if(str[i]==' ')
			n=i;
		for(j=i+1;j!='\0';j++)
			if(str[j]=' ')
			{
				e=j;
				break;
			}
		sort(str,n,e);
	}
	printf("Sorted string \n%s",str);
	return 0;
}

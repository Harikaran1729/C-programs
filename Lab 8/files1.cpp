//Write a C program to read data from keyboard, write it to a file called INPUT, again read the same data from input file and display it on the screen.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	fp=fopen("E:/C programs/Lab exercises/Files/INPUT.txt","w");
	printf("Enter data: ");
	gets(str);
	if(fp==NULL){
		printf("ERROR");
		return 1;
	}
	fprintf(fp,"%s",str);
	fclose(fp);
	
	fp=fopen("E:/C programs/Lab exercises/Files/INPUT.txt","r");
	if(fp==NULL){
		printf("ERROR");
		return 1;
	}
	printf("Data read from file: \n");
	printf("%s",str);
	fclose(fp);
	return 0;
}

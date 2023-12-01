//Write a C program to copy content of one file into another
#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *fp1,*fp2;
	fp1=fopen("E:/C programs/Lab exercises/Files/INPUT.txt","r");
	if(fp1==NULL){
		printf("ERROR");
		return 1;
	}
	fp2=fopen("E:/C programs/Lab exercises/Files/COPY.txt","w");
	if(fp2==NULL){
		printf("ERROR");
		fclose(fp1);
		return 1;
	}
	char ch;
	while((ch=fgetc(fp1))!=EOF){
		fputc(ch,fp2);
	}
	printf("Successfully copied.");
	fclose(fp1);
	fclose(fp2);
	return 0;
	
}

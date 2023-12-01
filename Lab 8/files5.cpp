//Write a C program that appends one file at the end of another
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1,*fp2;
	fp1=fopen("E:/C programs/Lab exercises/Files/FILE1.txt","a");
	fp2=fopen("E:/C programs/Lab exercises/Files/DATA.txt","r");
	char ch;
	while((ch=fgetc(fp2))!=EOF){
		putc(ch,fp1);
	}
	printf("Successfully appended");
	fclose(fp1);
	fclose(fp2);
}

//Write a C program that compares two files and returns 0 if they are equal and 1 if not equal
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1,*fp2;
	fp1=fopen("E:/C programs/Lab exercises/Files/COPY.txt","r");
	if(fp1==NULL){
		printf("ERROR");
		return 1;
	}
	fp2=fopen("E:/C programs/Lab exercises/Files/DATA.txt","r");
	if(fp2==NULL){
		printf("ERROR");
		fclose(fp1);
		return 1;
	}
	int flag=0;
	char ch1,ch2;
	while((ch1=getc(fp1))!=EOF && (ch2=getc(fp2))!=EOF){
		if(ch1!=ch2){
			flag=1;
			break;
		}
	}
	if(flag=0)
		printf("EQUAL");
	else
		printf("UNEQUAL");
	fclose(fp1);
	fclose(fp2);
	return 0;
}

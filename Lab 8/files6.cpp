//Write a C program that reads a file containing integers and appends at its end the sum of all the integers
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("E:/C programs/Lab exercises/Files/DATA.txt","a+");
	int num,sum=0;
	rewind(fp);
	while(fscanf(fp,"%d",&num)==1) {
        sum += num;
    }
	fprintf(fp,"\nSum = %d",sum);
	fclose(fp);
	return 0;
}

//A file named DATA contains a series of integer numbers. Write a C program to read these numbers and then write all ‘odd’ numbers to a file to be called ODD and all ‘even’ numbers to a file to be called EVEN.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *data,*odd,*even;
	int num;
	data=fopen("E:/C programs/Lab exercises/Files/DATA.txt","r");
	if(data==NULL){
		printf("ERROR");
		return 1;
	}
	odd=fopen("E:/C programs/Lab exercises/Files/ODD.txt","w");
	if(odd==NULL){
		printf("ERROR");
		fclose(data);
		return 1;
	}
	even=fopen("E:/C programs/Lab exercises/Files/EVEN.txt","w");
	if(even==NULL){
		printf("ERROR");
		fclose(data);
		fclose(odd);
		return 1;
	}
	
	while(fscanf(data,"%d",&num)==1){
		if(num%2==1){
			fprintf(odd,"%d\n",num);
		} else {
			fprintf(even,"%d\n",num);
		}
	}
	fclose(data);
	fclose(odd);
	fclose(even);
	printf("Successfully categorised as ODD and EVEN.");
	return 0;
}

/*WAP to calculate percetnage of a student given the marks of 5 subjects*/
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,avg;
	printf("Enter the marks in subject1: ");
	scanf("%d",&s1);
	printf("Enter the marks in subject2: ");
	scanf("%d",&s2);
	printf("Enter the marks in subject3: ");
	scanf("%d",&s3);
	printf("Enter the marks in subject4: ");
	scanf("%d",&s4);
	printf("Enter the marks in subject5: ");
	scanf("%d",&s5);
	avg=(s1+s2+s3+s4+s5)/5;
	printf("Average of the student is %d",avg);
	return 0;
	
}

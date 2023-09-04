/*WAP to find the salary of the employee*/
#include<stdio.h>
int main()
{
	int sal, DA, HRA,total;
	printf("Enter the salary of the basic employee: ");
	scanf("%d",&sal);
	DA=45*sal/100;
	HRA=16*sal/100;
	total=sal+DA+HRA;
	printf("The salary of the employee is %d",total);
	return 0;
}

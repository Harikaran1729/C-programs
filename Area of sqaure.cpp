/*Write a C program to find area of square*/
#include<stdio.h>
int main()
{
	int side,area;
	printf("Enter the side length: ");
	scanf("%d",&side);
	area=side*side;
	printf("The area of the sqaure is %d",area);
	return 0;
}

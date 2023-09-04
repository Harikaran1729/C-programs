/*WAP to find area of circle*/
#include<stdio.h>
int main()
{
	int rad,area;
	printf("Enter radius: ");
	scanf("%d",&rad);
	area=3.14*rad*rad;
	printf("The area of the circle is %d",area);
	return 0;
}

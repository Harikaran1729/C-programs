//WAP to print grade of a student//
#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,per;
	printf("Enter you marks in hysics, Chemistry, Biology, Mathematics and Computer: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	per=(a+b+c+d+e)/5;
	if(per>=90)
	{printf("Grade A");}
	else if(per<90&&per>=80)
	{printf("Grade B");}
	else if(per<80&&per>=70)
	{printf("Grade C");}
	else if(per<70&&per>=60)
	{printf("Grade D");}
	else if(per<60&&per>=40)
	{printf("Grade E");}
	else
	{printf("Grade F"); }
	return 0;
}

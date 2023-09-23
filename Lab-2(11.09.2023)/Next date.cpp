//WAP to find the next date//
#include<stdio.h>
int main()
{
	int d,m,y,b;
	printf("Enter date, month and year : ");
	scanf("%d %d %d", &d, &m, &y);
	b=0;
	if(m>12)
	{
		printf("INVALID INPUT");
		b++;
	}
	else
	{
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d>31)
			{
				printf("INVALID INPUT");
				b++;
			}
			else if(d<31)
			{ d++; }
			else
			{
				d=1;
				if(m<12)
				{ m+=1; }
				else
				{
					m=1;
					y+=1;
				}
			}
		}
	
	
		else if(m==4 || m==6 || m==9 || m==11)
	{
		if(d>30)
		{
			printf("INVALID INPUT");
			b++;
		}
		else if(d<30)
		{ d++; }
		else
		{
			d=1;
			if(m<12)
			{ m++; }
			else
			{
				m=1;
				y++;
			}
		}
	}
	
	else
	{
		if((y%4==0 && (y%100!=0 || y%400==0)) && d<=29)
		{
			if(d>29)
			{
				printf("INVALID INPUT");
				b++;
			}
			else if(d<29)
			{
				d+=1;
			}
			else if(d=29)
			{
				d=1;
				if(m<12)
				{ m++;}
				else
				{
					m=0;
					y++;
				}
			}
		}
		else
		{
			if(d>28)
			{
				printf("INVALID INPUT");
				b++;
			}
			else if(d<28)
			{
				d++;
			}
			else if(d=28)
			{
				d=1;
				if(m<12)
				{ m++;}
				else
				{
					m=0;
					y++;
				}
			}
		}
	}
	if(b==0)
	{ printf("%d %d %d", d,m,y); }
	
    return 0;
}}

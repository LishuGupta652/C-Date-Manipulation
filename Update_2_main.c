#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	int d,m,y,y_b,len_y=0;
	clrscr();
	printf("Enter date month and year respectively");
	scanf("%d %d %d",&d,&m,&y);

	y_b = y;

	while(y_b != 0)
	{
		y_b /= 10;
		++len_y;
	}							//check the length the integer in year:

	if(len_y>0 && len_y<4)
	{

	if(d>0 && d < 32)
	{

	if(m==1 || m ==3 || m ==5 || m ==7 || m ==8 || m==10)
	{
		if(d<31)
		{
			d+=1;
		}
		else
		{
			d=1;
			m+=1;
		}
	}
	else if(m == 2)
	{
		if(y%4==0)
		{
			if(d<29)
			{
				d+=1;
			}
			else
			{
			d=1;
			m+=1;
			}
		}
		else if(y%100==0)
		{
			if(y%400 == 0)
			{
				if(d<29)
				{
					d+=1;
				}
				else
				{
					d=1;
					m+=1;
				}
			}
			else
			{
				if(d<28)
				{
					d+=1;
				}
				else
				{
					d=1;
					m+=1;
				}
			}
		}
		else
		{
			if(d<28)
			{
				d+=1;
			}
			else
			{
				d=1;
				m+=1;
			}
		}
	}
	else if(m==12)
	{
		if(d<31)
		{
			d+=1;
		}
		else
		{
			d=1;
			m=1;
			y+=1;
		}
	}
	else if(m == 4 || m == 6|| m == 9|| m == 11)
	{
		if(d<30)
		{
			d+=1;
		}
		else
		{
			d=1;
			m+=1;
		}
	}
	else
	{
	textcolor(RED);
	cprintf("\nEnter Correct Month, In range [1/12]");
	}

	if(m < 13)       // CORRECT OUTPUT
	{
	textcolor(GREEN);
	cprintf("\n\nNext day is %d-%d-%d\n\n",d,m,y);
	}


		}
	 else        //CHECKING THE INPUT OF THE DATE
	 {
	 textcolor(RED);
	 cprintf("\nEnter correct date, In range [1,31]");
	 }
	 }
	 else 		//CHECKING THE LENGTH OF THE YEAR
	 printf("\n\nInput Year of length [1/4]");



	getch();
}

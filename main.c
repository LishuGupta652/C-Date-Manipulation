#include<stdio.h>
#include<conio.h>
void main()
{
    int d,m,y;
    printf("enter date month and year");
    scanf("%d %d %d",&d,&m,&y);
    if (m>0 && m<13)
    {
        if(m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 )
        {
            if(d<31)
            {
                d+=1;
            }
            else if(d ==31)
            {
                d =1;
                m+=1;
            }
            else ;
        }
        else if (m == 2)
        {
            if(y%4==0)
            {
                if(d<29)
                {
                    d+=1;
                }
                else if(d == 29)
                {
                    d =1;
                    m+=1;
                }
                else ;
            }
            else if(y%400 ==0)
            {
                if(d<28)
                {
                    d+=1;
                }
                else if(d == 28)
                {
                    d =1;
                    m+=1;
                }
                else ;
            }
            else
            {
                if(d<28)
                {
                    d+=1;
                }
                else if(d == 28)
                {
                    d =1;
                    m+=1;
                }
                else ;
            }
        }
        else if (m == 12)
        {
            if(d < 31)
            {
                d +=1;
            }
            else
            {
                d =1;
                m =1;
                y+=1;
            }
        }
    
    
        else 
        {
            if(d<30)
            {
                d+=1;
            }
            else if(d ==30)
            {
                d =1;
                m+=1;
            }
            else ;
        }
        
    }
    
    
    printf("Date month and year is %d-%d-%d",d,m,y);
}


#include<iostream.h>
#include<conio.h>
class time
{
	int h,m,s;
public:time();
	time(int,int,int);
	time(const time&);
	void display();
	time operator=(const time&);
	friend time operator+(const time&,const time&);
};//close of class
time::time()
{
	h=m=s=0;
	}
	time::time(int h,int m,int s)
	{
		this->h=h;this->m=m;this->s=s;
		}
		time::time(const time &a)
		{
			h=a.h;m=a.m;s=a.s;
			}
			void time::display()
			{
				if(s>=60)
				{
					m=m+s/60;
					s=s%60;
					}
				if(m>=60)
				{
				    h=h+m/60;
				    m=m%60;
				    }
				    cout<<endl<<h<<":"<<m<<":"<<s;
				    }
		time time:: operator=(const time &d)
		{
			cout<<endl<<"own assigenment called";
		this->h=d.h;this->m=d.m;this->s=d.s;
		return(*this);
		}
		time operator+(const time &e,const time &f)
		{
		 time temp;
		 temp.h=e.h+f.h;temp.m=e.m+f.m;temp.s=e.s+f.s;
		 return(temp);
		 }




		       void main()
		       {
		       clrscr();
		       time x,y(4,60,60),z(y),j;
		       x.display();
		       y.display();
		       z.display();
		       x=y+z;
		       cout<<endl<<"Sum of two time obj";
		       x.display();
		       j=x;
		       j.display();
		       getch();
		       }//close of main
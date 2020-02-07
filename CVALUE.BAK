//program based on time format
#include<iostream.h>
#include<conio.h>
class time
{
	int h,m,s;
	public:time();
		time(int,int,int);
		time(const time a,const time b,const time c);
		void addtime(time,time);
		void disp();
};//close of class
time::time()
{
	cout<<endl<<"Default constrecter called";
	h=m=s=0;
	}//close of defalut constrector called
time::time(int h,int m,int s)
{
	cout<<endl<<"overlodad constrector called";
	this->h=h;this->m=m;this->s=s;
	}//close of overlodad constrester called
time::time(const time a,const time b,const time c)
{
	cout<<endl<<"copy constrector called";
	this->h=a.h;this->m=b.m;this->s=c.s;
	}//close of copy constrector called
void time::disp()
{
	if(s>=60)
	{
		m=m+s/60;
		s=s%60;
		}
	if(m>=60)
	{
		h=h+m/100;
		m=m%60;
		}
	cout<<endl<<h<<":"<<m<<":"<<s;
	}//close of display()
void time::addtime(time c,time d)
{
this->h=c.h+d.h;
this->m=c.m+d.m;
this->s=c.s+d.s;
}
void main()
{
	clrscr();
time x,y(12,60,60),z(y),s(12,60,60),p(x);
x.disp();
y.disp();
z.disp();
x.addtime(s,z);
x.disp();
p.disp();
getch();
}//close of main




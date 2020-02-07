//program to overload '<'   '>' operator in cpp
#include<iostream.h>
#include<conio.h>
class time
{
	int h,m,s;
	public:time();
		time(int,int,int);
		time(const time&);
		void input(int,int,int);
		void display();
		int operator<(const time&);
		friend operator>(const time&,const time&);
		};//close of class
time::time(){
h=m=s=0;
cout<<endl<<"Default constrector called";
}
time::time(int h,int m,int s){
cout<<endl<<"OverLodad constrector called";
this->h=h;this->m=m;this->s=s;
}
time::time(const time&w){
cout<<endl<<"Copy Constrester called";
h=w.h;m=w.m;s=w.s;
}
void time::input(int h,int m,int s){
this->h=h;this->m=m;this->s=s;
}
void time::display(){
if(s>=60){
	m=m+s/60;
	s=s%60;
	}
if(m>=60){
	h=h+m/60;
	m=m%60;
	}
cout<<endl<<h<<":"<<m<<":"<<s;
}
int time:: operator<(const time&d){
int g=0;
if(this->h<d.h&&this->m<d.m&&this->s<d.s)
g=1;
return(g);
}
int operator>(const time&k,const time&l){
int g=0;
if(k.h>l.h&&k.m>l.m&&k.s>l.s)
g=1;
return(g);
}
void main(){
clrscr();
time x,y(5,60,60),z(y);
x.display();
y.display();
z.display();
if(y>z)
	cout<<endl<<"Objec y is greter then object z";
else
	cout<<endl<<"Objec y is not  greter then object z";
if(y<z)
	cout<<endl<<"Objec y is Less then object z";
else
       cout<<endl<<"Objec y is not less then object z";
getch();
}//close of main
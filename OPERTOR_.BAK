//program based on overload '!='operator
#include<iostream.h>
#include<conio.h>
class  time{
	int h,m,s;
public:time();
	time(int,int,int);
	time(const time&);
	void input(int,int,int);
	void display();
	int operator!=(const time&);
	friend int operator<=(const time&,const time&);
	};//close of class
time::time()
{
	h=m=s=0;
	cout<<endl<<"Default constrector called";
}
time::time(int h,int m,int s){
cout<<endl<<"Overlodad constrector called";
this->h=h;this->m=m;this->s=s;
}
time::time(const time&e){
cout<<endl<<"Copy constrector called";
h=e.h;m=e.m;s=e.s;
}
void time::input(int h,int m,int s){
this->h=h;this->m=m;this->s=s;
}
void time::display(){
if(s>=60){
m=m+s/60;
s=s%60;}
if(m>=60){
h=h+m/60;
m=m%60;
}
cout<<endl<<h<<":"<<m<<":"<<s;
}
int time::operator!=(const time&r){
int hi=0;
if(this->h!=r.h&&this->m!=r.m&&this->s!=r.s)
 hi=1;
return(hi);
}
int operator<=(const time&f,const time&l)
{
int j=0;
if(f.h<=l.h&&f.m<=l.m&&f.s<=l.s)
j=1;
return(j);
}
void main(){
clrscr();
time x,y(4,78,67),z(y);
x.display();
y.display();
z.display();
if(y!=z)
	cout<<endl<<"Object y is not equalto object z";
else
	cout<<endl<<"object y is equalto object z";
if(y<=z)
	cout<<endl<<"Object y is less then equalto object z";
else
	cout<<endl<<"Object y  less then equalto z";
getch();
}//close of main
//program based on overloading operator in c++
#include<iostream.h>
#include<conio.h>
class complex
{
	float real,imag;
public:complex();
	complex(float,float);
	complex(const complex&);
	void input(float,float);
	void display();
	complex operator*(const complex&);
	friend complex operator /(const complex&,const complex&);
};//close of class
complex::complex(){
cout<<endl<<"Default construrcter called";
real=imag=0;
}
complex::complex(float real,float imag){
cout<<endl<<"Overlodad constructer called";
this->real=real;this->imag=imag;
}
complex::complex(const complex&a){
cout<<endl<<"Copy conuster called";
real=a.real;imag=a.imag;
}
void complex::input(float real,float imag){
this->real=real;this->imag=imag;
}
void complex::display(){
if(imag>=0)
	cout<<endl<<real<<"+"<<imag<<"i";
else
	cout<<endl<<real<<imag<<"i";
}
complex complex::operator *(const complex&d){
this->real=this->real*d.real;
this->imag=this->imag*d.imag;
return(*this);
}
complex operator/(const complex&c,const complex&k){
complex tmp;
tmp.real=c.real/k.real;
tmp.imag=c.imag/k.imag;
return(tmp);
}
void main(){
clrscr();
complex x,y(2,2),z(y);
x.display();
y.display();
z.display();
x=y*z;
cout<<endl<<"Product of two obj\n";
x.display();
x=y/z;
cout<<endl<<"Divesion of two obj\n";
x.display();
getch();
}//close of main


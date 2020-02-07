//program based on overload '<<' '>>' in cpp
#include<iostream.h>
#include<conio.h>
class complex
{
	float real,imag;
	public:complex();
		complex(float,float);
		complex(const complex&);
		friend istream& operator>>(istream&,complex&);
		friend ostream& operator<<(ostream&,const complex&);
		};//close of class
complex::complex(){
real=imag=0;
}
complex::complex(float real,float imag){
this->real=real;this->imag=imag;
}
complex::complex(const complex&s){
real=s.real;imag=s.imag;
}
istream& operator>>(istream&input,complex&w){
cout<<endl<<"Enter Real part::";
input>>w.real;
cout<<endl<<"Enter Imagnari part::";
input>>w.imag;
return(input);
}
ostream& operator<<(ostream&output,const complex&r){
if(r.real>=0)
	output<<endl<<r.real<<"+"<<r.imag<<"i";
else
	output<<endl<<r.real<<r.imag<<"i";
return(output);
}
void main(){
clrscr();
complex x,y,z;
cout<<x<<y<<z;
cin>>x>>y>>z;
cout<<x<<y<<z;
getch();
}
//program to overaload '<<'inserer in cpp
#include<iostream.h>
#include<conio.h>
class complex
{
	float real,imag;
public:complex();
	complex(float,float);
	complex(const complex&);
	void input(float,float);
	friend ostream&  operator<<(ostream&,const complex&);
	};//close of class
complex::complex(){
real=imag=0;
}
complex::complex(float real,float imag){
this->real=real;this->imag=imag;
}
complex::complex(const complex&a){
real=a.real;imag=a.imag;
}
void complex::input(float real,float imag){
this->real=real;this->imag=imag;
}
ostream& operator<<(ostream&print,const complex&w){
if(w.imag>=0)
	print<<endl<<w.real<<"+"<<w.imag<<"i";
else
	print<<endl<<w.real<<w.imag<<"i";
	return(print);
	}
void main(){
clrscr();
complex x,y(5,6),z(y);
cout<<x<<y<<z;
getch();
}//close of main

//program to overload unery operator ++,--with the help of friend function
#include<iostream.h>
#include<conio.h>
class complex
{
	float real,imag;
	public:complex();
		complex(float,float);
		complex(const complex&);
		friend complex operator++(complex&);
		friend complex operator--(complex&);
		friend complex operator++(complex&,int);
		friend complex operator--(complex&,int);
		void input(float,float);
		void display();
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
void complex::display(){
if(imag>=0)
	cout<<endl<<real<<"+"<<imag<<"i";
else
	cout<<endl<<real<<imag<<"i";
}
complex operator++(complex&w){
complex temp;
w.real+=1;
w.imag+=1;
temp.real=w.real;
temp.imag=w.imag;
return(temp);
}
complex operator--(complex&w){
complex temp;
w.real-=1;
w.imag-=1;
temp.real=w.real;
temp.imag=w.imag;
return(temp);
}
complex operator++(complex&w,int){
complex temp;
temp.real=w.real;
temp.imag=w.imag;
w.real+=1;
w.imag+=1;
return(temp);
}
complex operator--(complex&w,int){
complex temp;
temp.real=w.real;
temp.imag=w.imag;
w.real-=1;
w.imag-=1;
return(temp);
}
void main(){
clrscr();
complex x,y(3,4),z(y),f(4,5);
x.display();
y.display();
z.display();
x++;
++y;
x.display();
y.display();
f--;
f.display();
x=++f;
x.display();
getch();
}




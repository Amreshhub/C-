//program based on opertor overloading in cpp
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
	friend complex operator/(const complex&,const complex&);
};//close of class
complex::complex(){
cout<<endl<<"Default constructer called";
real=imag=0;
}//close of class
	complex::complex(float real,float imag){
	cout<<endl<<"Overlodade constructer called";
	this->real=real;this->imag=imag;
	}//close of function
		complex::complex(const complex&a){
		cout<<endl<<"copy constructer called";
		real=a.real;
		imag=a.imag;
		}//close of function
			void complex::input(float real,float imag){
			this->real=real;this->imag=imag;
			}//close of function
				void complex::display(){
				if(imag>=0)

					cout<<endl<<real<<"+"<<imag<<"i";
				else
					cout<<endl<<real<<imag<<"i";
				}//close of function
					complex complex::operator*(const complex&s){
					complex temp;
					temp.real=this->real*s.real;
					temp.imag=this->imag*s.imag;
					return(temp);
					}//close of function
						complex operator/(const complex&h,const complex&g){
						complex temp;
						temp.real=h.real/g.real;
						temp.imag=h.imag/g.imag;
						return(temp);
						}//close of function
			void main(){
			clrscr();
			complex x,y(4,3),z(y);
			y.display();
			z.display();
			x=y*z;
			cout<<endl<<"Sum of two object:";
			x.display();
			x=y/z;
			cout<<endl<<"Deffrence of two object";
			x.display();
			getch();
			}// close of main



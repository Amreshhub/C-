//program overloding '++'& ''--' operator with class member operator function
#include<iostream.h>
#include<conio.h>
class complex
{
	float real,imag;
	public:complex();
		complex(float,float);
		complex(const complex&);
		friend istream& operator>>(istream&, complex&);
		friend ostream& operator<<(ostream&,const complex&);
		complex operator++();
		complex operator--();
		complex operator++(int);
		complex operator--(int);
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
 istream& operator>>(istream&input,complex&s){
cout<<endl<<"Enter real part:-";
input>>s.real;
cout<<endl<<"Enter imagnari part:-";
input>>s.imag;
return(input);
}
ostream& operator<<(ostream&output,const complex&w){
if(w.imag>=0)
	output<<endl<<w.real<<"+"<<w.imag<<"i";
else
	output<<endl<<w.real<<w.imag<<"i";
return(output);
}
complex complex::operator++(){
this->real+=1;
this->imag+=1;
return(*this);
}
complex complex::operator--(){
this->real-=1;
this->imag-=1;
return(*this);
}
complex complex::operator++(int){
complex temp;
temp.real=this->real;
temp.imag=this->imag;
this->real+=1;
this->imag+=1;
return(temp);
}
complex complex::operator--(int){
complex temp;
temp.real=this->real;
temp.imag=this->imag;
this->real-=1;
this->imag-=1;
return(temp);
}
 void main(){
 clrscr();
 complex x,y,z;
 cin>>y>>z;
 ++y;
 z--;
 cout<<y;
 cout<<z;
 ++y;
 z--;
 cout<<y;
 cout<<z;
 getch();
 }
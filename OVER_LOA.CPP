//example to demoonstrate overloaded constructer in Inharitance
#include<iostream.h>
#include<conio.h>
class base
{
	double bvar;
protected:base(){
	cout<<endl<<"Base class Default constrector called";
	bvar=0;
	}
	base(double b){
	cout<<endl<<"Base class Overlodaed constresrer called";
	bvar=b;
	}
	void disp(){
	cout<<endl<<"Within/insde base class disp() function called";
	cout<<endl<<"Value in base var="<<bvar;
}
};//close of base class
//define derived class
class derived:public base
{
	double dvar;
public:derived(){
cout<<endl<<"Derived class default constrector calld";
dvar=0;
}
derived(double b,double d):base(b){
cout<<endl<<"Derived class overlodad constrector called";
dvar=d;
}
void disp(){
cout<<endl<<"Within/inside derived class disp()function called";
base::disp();
cout<<endl<<"Value in derived class member:"<<dvar;
}
};//close of derived class

void main(){
clrscr();
derived x,y(20,40);
x.disp();
y.disp();
getch();
}//close of main


//program to show order of execution of constector in inharitance
#include<iostream.h>
#include<conio.h>
//define base class
class base
{
	protected:base(){
	cout<<endl<<"Base class Default consctor called";

	}
	void output(){
	}
	};//close of base class
//define derived class
class derived:public base
{
	public:derived(){
	cout<<endl<<"Derived class default consterctor called";
	}
	void output(){
	base::output();
	}
	};//close of derived class
void main(){
clrscr();
derived d;
d.output();
getch();
	}//close of main
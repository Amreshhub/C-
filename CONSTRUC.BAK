//example to show constrocter use in inharitance
#include<iostream.h>
#include<conio.h>
class base
{
	int bvar;
protected:base(){
cout<<endl<<"Base class default constrecter called";
bvar=0;
}
void disp(){
cout<<endl<<"base class disp function called";
cout<<endl<<"Value in var bvar:"<<bvar;
}
};//close of base class
//define drived class
class derived:public base
{
	int dvar;
public:derived(){
cout<<endl<<"Derived class constrector called";
dvar=0;
}
void disp(){
base::disp();
cout<<endl<<"Within /inside derived class disp called";
cout<<endl<<"Value in var dvar:-"<<dvar;
}
};//close of derived class
void main(){
clrscr();
derived d;
d.disp();
getch();
}//close of main
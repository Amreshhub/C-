																																//program to resolved ambugity case of multipull inharitance
#include<iostream.h>
#include<conio.h>
class base1
{
public:void disp(){
	cout<<endl<<"Base1 class disp() function called";
	}
	};
//close of base class1
//defining base2 class
class base2
{
public:void disp(){
cout<<endl<<"Base2 class disp() function called";
}
};
//define derived class
class derived:public base1,public base2{
public:void disp(){
base1::disp();
base2::disp();
}
};
//close of derived class
void main(){
clrscr();
derived d;
d.disp();
getch();
}//close of main
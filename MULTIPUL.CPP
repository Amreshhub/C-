//program based on multipul inharitance
#include<iostream.h>
#include<conio.h>
//define base class1
class base1
{
	protected:void disp1(){
	cout<<endl<<"Basc class1 function called";
	}
};
//defining basc class2
class base2
{
	protected:void disp2(){
	cout<<endl<<"Bacse class2 function called";
	}
};
//define drived class
class drived:public base1,public base2
{
public:void driveddisp(){
cout<<endl<<"within/inside drived class function called";
disp1();
disp2();
}
};
void main(){
clrscr();
drived d;
d.driveddisp();
getch();
}//close of main
//program based on multilabel inharitance
#include<iostream.h>
#include<conio.h>
//defin base class1
class a
{
	protected:void adisp(){
	 cout<<endl<<"class a function called:";
	}
  };
class b:public a
{
	protected:void bdisp(){
	cout<<endl<<"Class b function called";
	adisp();
	}
};
class c:public b
{
public:void cdisp(){
	cout<<endl<<"within/inside drived class called";
       //		adisp();
	bdisp();
	}
};
void main(){
clrscr();
c c1;
c1.cdisp();
getch();
}//close of main
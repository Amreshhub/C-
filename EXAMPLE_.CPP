//examples show puer vertual function
#include<iostream.h>
#include<conio.h>
//define base class automobiles
class auto_mo
{
public: virtual void gear()=0;
       virtual	void braek()=0;
};//close of base class
//define derived class maruti
class maruti:public auto_mo{
public:void gear(){
cout<<endl<<"Four gear function abvalibale";
}
void braek(){
cout<<endl<<"Normal break abvalable";
}
};//close of derived class murite
//define derived class ford
class ford:public auto_mo{
public:void gear(){
cout<<endl<<"Five gear function abvalibale";
}
void braek(){
cout<<endl<<"Power break abvalable";
}
};//close of derived class ford
void main(){
clrscr();
auto_mo *a;
maruti m;
ford f;
a=&m;
a->gear();
a->braek();
a=&f;
a->gear();
a->braek();
getch();
}//close of main


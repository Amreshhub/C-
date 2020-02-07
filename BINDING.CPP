//use of setbinding and let binding
#include<iostream.h>
#include<conio.h>
class base{
public: virtual void disp(){
cout<<endl<<"Base class disp()function called";
}
};
//define derived1 class
class derived1:public base
{
public:void disp(){
//base::disp();
cout<<endl<<"Derived1 class disp() function called";
}
};
//define derived2 class
class derived2:public base{
public:void disp(){
cout<<endl<<"Derived2 classdisp() function called";
}
};
void main(){
clrscr();
derived1 d1;
derived2 d2;

base *b;
b=&d1;
b->disp();
b=&d2;
b->disp();
getch();
}
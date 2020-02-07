//example of single inharitance not complite
#include<iostream.h>
#include<conio.h>
class feneture
{
	float width,hight;
protected: void input(){
cout<<endl<<"Enter hight value:-";
cin>>hight;
cout<<endl<<"Value of width:-";
cin>>width;
}
void output(){
cout<<endl<<"Hight:-"<<hight;
cout<<endl<<"Width:-"<<width;
}
};
//defining drived class chear
class chear:public feneture
{
	int arms,legs;
public:void input(){
cout<<endl<<"Enter dimonsen of chear to be made:";
feneture::input();
cout<<endl<<"Enter no arms:";cin>>arms;
cout<<endl<<"Enter no of leges:-";cin>>legs;
}
void output(){
cout<<endl<<"*******Displaying the order of Chear:**********";
feneture::output();
cout<<endl<<"No of arms:"<<arms;
cout<<endl<<"No of legs:"<<legs;
cout<<endl<<"***********************************************";
}
};//close of drived class chear
//defining drived class Bookself
class book:public feneture
{
	int self;
public: void input(){
cout<<endl<<"Enter dimnson of bookself:";
feneture::input();
cout<<endl<<"Enter no of self:-";cin>>self;
}
void output(){
cout<<endl<<"*************Displaying order of book self**************";
feneture::output();
cout<<endl<<"No of self:"<<self;
cout<<endl<<"********************************************************";
}
};//close of drived class book
void main(){
clrscr();
chear c;
book b;
c.input();
c.output();
b.input();
b.output();
getch();
}//close of mainc

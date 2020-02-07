//this is complite  exapmle of pollymorhim  function
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
//define base class faniture
class feniture
{
	float width,hight;
	char *color;
public:feniture(){
width=hight=0;
color='\0';
}
	feniture(float h,float w,char *c)
	{
		width=w;
		hight=h;
	color=new char[strlen(c)+1];
	strcpy(color,c);
	}
	virtual void accept(){
	char temp[100];
	cout<<endl<<"Wideth:-";cin>>width;
	cout<<endl<<"Hight:-";cin>>hight;
	delete[]color;
	cout<<endl<<"Color:-";
	fflush(stdin);
	gets(temp);
	color=new char[strlen(temp)+1];
	strcpy(color,temp);

	}
	virtual void disp(){
	cout<<endl<<"Wideth:-"<<width;
	cout<<endl<<"Hight:-"<<hight;
	cout<<endl<<"Color:-"<<color;
	}
	~feniture(){
	delete[]color;
	}
};//close of base class feneture
//define derived class chear
class chear:public feniture{
	int leags,arms;
	char *made_of;
public: chear(){
leags=arms=0;
made_of='\0';
}
	chear(float w,float h,char *c,char *m ,int l,int a):feniture(w,h,c){
	//width=w;hight=h;
	leags=l;arms=a;
	made_of=new char[strlen(m)+1];
	strcpy(made_of,m);
	}
	void accept(){
	char temp[100];
	cout<<endl<<"***********Insert order of chear to be made***********";
	feniture::accept();
	cout<<endl<<"Enter on of leags:-";
	cin>>leags;
	cout<<endl<<"Enter no of arms:-";
	cin>>arms;
	delete[]made_of;
	cout<<endl<<"Marereal used in chear:-";
	fflush(stdin);
	gets(temp);
	made_of=new char[strlen(temp)+1];
	strcpy(made_of,temp);
	}
	 void disp(){
	cout<<endl<<"*******Displaying order of chear************";
	feniture::disp();
	cout<<endl<<"No of leags:"<<leags;
	cout<<endl<<"No of arms:"<<arms;
	cout<<endl<<"Material is to be used:"<<made_of;
	}
	~chear(){
	delete[]made_of;
	}
};//close of derived class chear
//define derived class bookshilf
class book:public feniture{
	int self;
	char *made_of;
public: book(){
self=0;
made_of='\0';
}
	book(float w,float h,char *c,char *m ,int s):feniture(w,h,c){
	//width=w;hight=h;
	self=s;
	made_of=new char[strlen(m)+1];
	strcpy(made_of,m);
	}
	void accept(){
	char temp[100];
	cout<<endl<<"***********Insert order of bookshilf to be made***********";
	feniture::accept();
	cout<<endl<<"Enter on of shelf:-";
	cin>>self;

	delete[]made_of;
	cout<<endl<<"Enter material to be used:-";
	fflush(stdin);
	gets(temp);
	made_of=new char[strlen(temp)+1];
	strcpy(made_of,temp);
	}
	 void disp(){
	cout<<endl<<"*******Displaying order of bookshilf************";
	feniture::disp();
	cout<<endl<<"No of self:"<<self;
	cout<<endl<<"Material is to be used:"<<made_of;
	}
	~book(){
	delete[]made_of;
	}
};//close of derived class bookshilf

	void main(){
	clrscr();
	feniture *f;
	chear c;
	book b;
	f=&c;
	f->accept();
	f->disp();
	f=&b;
	f->accept();
	f->disp();
	getch();
	}//close of main



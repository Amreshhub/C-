//program used to destroctor in case of inharitince
#include<iostream.h>
#include<conio.h>
#include<string.h>
//defin base class furniture
class furniture
{
	char *color;
	float width,hight;
protected:furniture(){
cout<<endl<<"Base class default constrector called";
color='\0';
width=hight=0;
}
	furniture(char *c,float w,float h){
	cout<<endl<<"Base class ovearload constroctor called";
	color= new char[strlen(c)+1];
	strcpy(color,c);
	width=h;
	hight=h;
	}
		void accept(char *c,float w,float h){
		delete[]color;
		color=new char[strlen(c)+1];
		strcpy(color,c);
		width=w;
		hight=h;
		}
			void disp(){
			cout<<endl<<"COLOR::"<<color;
			cout<<endl<<"WIDTH::"<<width;
			cout<<endl<<"HIGHT::"<<hight;
			}
~furniture(){
cout<<endl<<"Base class furniture Disctrrctor called";
delete[]color;
}
	};//close of base class furniture
//defin derived class chear
class chear:public furniture{
	char *made_of;
	int leags,arms;
public:chear(){
cout<<endl<<"Derived class chear default constrocter called";
made_of='\0';
leags=arms=0;
}
	chear(char *c,float w,float h,char *made,int l,int a):furniture(c,w,h){
	cout<<endl<<"Derived class overloaded constrocter called";
	made_of=new char[strlen(made)+1];
	strcpy(made_of,made);
	leags=l;arms=a;
	}
	void accept(char *c,float w,float h,char *made,int l,int a){
	cout<<endl<<"******Insert Order of chear to be made********";
	furniture::accept(c,w,h);
	delete[]made_of;
	made_of=new char[strlen(made)+1];
	strcpy(made_of,made);
	 leags=l;
	 arms=a;
	cout<<endl<<"Enter no of leags::";cin>>leags;
	cout<<endl<<"Enter no arms::";cin>>arms;
	cout<<endl<<"Entre made of chear::";cin>>made_of;
	}
		void disp(){
		cout<<endl<<"Within/inside derived class disp() function called";

		cout<<endl<<"**********DISPLYING CHEAR ORDER**************";
		furniture::disp();
		cout<<endl<<"No of arms   ::"<<arms;
		cout<<endl<<"No of leags  ::"<<leags;
		cout<<endl<<"Chear Made of::"<<made_of;
		cout<<endl<<"*********************************************";
		}
	~chear(){
	cout<<endl<<"Derived Class Desctoter called";
	delete[]made_of;

	}
	};//close of derived class chear
//define derived class bookshlif
class book:public furniture{
	char *made;
	int salf;
public:book(){
cout<<endl<<"Derived class default constrctor called:";
made='\0';
salf=0;
}
	book(char *c,char *made_of,float w,float h,int s):furniture(c,w,h){
	cout<<endl<<"Derived class bookslif Overloaded constrector called";
	made=new char[strlen(made_of)+1];
	strcpy(made,made_of);
	salf=s;
	}
		void accept(char *c,float w,float h,int s, char *made_of){
		delete[]made;
		made=new char[strlen(made_of)+1];
		strcpy(made,made_of);
		cout<<endl<<"*********Insert oprder of bookShilf*************";
		furniture::accept(c,w,h);
		salf=s;
		cout<<endl<<"Enter no shilf::"<<salf;
		}
		void disp(){
		cout<<endl<<"****************DISPLAYING ORDER OF BOOKSHILF********";
		furniture::disp();
		cout<<endl<<"No of Self::"<<salf;
		cout<<endl<<"******************************************************";
		}
		~book(){
		cout<<endl<<"Derived class bookShilf Disctroctor called";
		delete[]made;
		}

	};//close of derived class bookshilf


	 void main(){
	 clrscr();{
	 chear c;
	 book b;
	 b.accept();
	 b.disp();
	 c.accept();
	 c.disp();
	  }
	  getch();
	  }//close of main


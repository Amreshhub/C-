//program to demonstrate inharittance
#include<iostream.h>
#include<conio.h>
struct feneture
{
	float width,hight;
};

class chear public: feneture{

	int legs,arms;
  public:      void accept(){
	cout<<"Enter value of width:-";
	cin>>width;
	cout<<"Enter value of hight:-";
	cin>>hight;
	cout<<"Enter no of arms:-";
	cin>>arms;
	cout<<"Enter no of legs:-";
	cin>>legs;
	}//close of accept
	void disp(){
	cout<<endl<<"===========Order of Chear=========";
	cout<<endl<<"Value of width:-        "<<width;
	cout<<endl<<"Value of hight:-	     "<<hight;
	cout<<endl<<"No of lages:-	     "<<legs;
	cout<<endl<<"No ofArms:-	     "<<arms;
	cout<<endl<<"==================================";
	}
	};
class bookshef public: feneture{

	int slef;
	public:void accept(){
	cout<<"Enter value of hight bookself:-";
	cin>>hight;
	cout<<"Enter vlaue of width bookself:-";
	cin>>width;
	cout<<"Enter no of self:-";
	cin>>self;
	}//close of accept
	void disp(){
	cout<<endl<<"===========Order of Chear=========";
	cout<<endl<<"Value of width:-        "<<width;
	cout<<endl<<"Value of hight:-	     "<<hight;
	cout<<endl<<"No of self:-	     "<<self;
	cout<<endl<<"==================================";
	}
	};//close of disp


void main(){
clrscr();
chear c;
c.accept();
c.disp();
bookshef d;
d.accept();
d.disp();
getch();
}//close of main
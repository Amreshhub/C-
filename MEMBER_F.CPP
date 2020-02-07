//member function overloading
#include<iostream.h>
#include<conio.h>
#include<dos.h>
class addtion
{
	int num1,num2,num3,num4;
public:
	void input(int a,int b){
		num1=a;num2=b;num3=0;num4=0;
					     }
	void input(int a,int b,int c){
		num1=a;num2=b;num3=c;num4=0;
					    }
	void input(int a,int b,int c,int d){
		num1=a;num2=b;num3=c;num4=d;
					     }
	int sum(){
	return(num1+num2+num3+num4);
				    }
  };
void main(){
addtion c;
int n,num1,num2,num3,num4;
clrscr();
a1:cout<<"Enter how many number do you want to Enter below 5 number:-";cin>>n;
if(n>4)
{
	cout<<endl<<"Invalied number found Plz Enter number only four:";
	delay(2000);
	goto a1;
	}
if(n==2)
{
	cout<<endl<<"Enter 2 number :-";cin>>num1>>num2;
	c.input(num1,num2);
	cout<<endl<<"Sum of two number="<<c.sum();
	}
if(n==3)
{
	cout<<endl<<"Enter 3 number:-";cin>>num1>>num2>>num3;
	c.input(num1,num2,num3);
	cout<<endl<<"Sum of three number:-"<<c.sum();
	}
if(n==4)
{
	cout<<endl<<"Enter 4  number :-";cin>>num1>>num2>>num3>>num4;
	c.input(num1,num2,num3,num4);
	cout<<endl<<"Sum of four number:-"<<c.sum();
	}
getch();
}


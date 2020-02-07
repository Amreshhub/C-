#include<iostream.h>
#include<conio.h>
class rev
{
	int a,rev;
public:
	int r(int num){
	a=num%10;
	rev=rev*10+a;
	num=num/10;
	return(rev);
	}//close of function
void display(){
	cout<<endl<<"reverse order is "<<rev;
	}//close of function
};//close of class
 void main(){
 clrscr();
 rev a;
 a.r(123);
 a.display();
 getch();
 }

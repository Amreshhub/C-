//example to show template functionor gANRIC FUNCTION
#include<iostream.h>
#include<conio.h>
//define class type
template<class x>
x swap(x &a, x&b)
{
	x temp;
	temp=a;
	a=b;
	b=temp;
}
void main(){
clrscr();
int a,b;
cout<<endl<<"Enter value of a:-";cin>>a;
cout<<endl<<"Enter value of b:-";cin>>b;
cout<<endl<<"Before swap value in a:-"<<a;
cout<<endl<<"Before swap value in b:-"<<b;
swap(a,b);
cout<<endl<<"After swap value in a:-"<<a;
cout<<endl<<"After swap value in b:-"<<b;
getch();
}//close of main



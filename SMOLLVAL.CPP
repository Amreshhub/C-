#include<iostream.h>
#include<conio.h>
void main(){
float c,d;
clrscr();
cout<<"\nEnter any two number:";
cin>>c>>d;
if(c<d)
	cout<<"\nSmollest value="<<c;
else
	cout<<"\nSmollest value="<<d;
getch();
}
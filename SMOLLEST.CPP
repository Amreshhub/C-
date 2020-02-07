#include<iostream.h>
#include<conio.h>
void main(){
int d,e,f;
clrscr();
cout<<"Enter any three number:";
cin>>d>>e>>f;
if(d<e)
	if(d<f)
		cout<<endl<<"Smollest value="<<d;
	else
		cout<<endl<<"Smollest value="<<f;
else
if(e<f)
	cout<<endl<<"Smollest value="<<e;
else
	cout<<endl<<"Smollest value="<<f;
getch();
}
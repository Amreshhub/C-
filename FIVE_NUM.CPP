//accpet five number chack and display smollest value
#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr();
cout<<"Enter any five number:";
cin>>a>>b>>c>>d>>e;
if(a<b)
	if(a<c)
		if(a<d)
			if(a<e)
				cout<<endl<<"Smollest value="<<a;
			else
				cout<<endl<<"Smollest value="<<e;
		else
		  if(d<e)
			cout<<endl<<"Smollest value="<<d;
		  else
			cout<<endl<<"Smoolest value="<<e;
	else
	if(c<d)
		if(c<e)
			cout<<endl<<"Smollest value="<<c;
		else
			cout<<endl<<"Smollest value="<<e;
	else
	if(d<e)
		cout<<endl<<"Smollest value="<<d;
	else
		cout<<endl<<"Smollest value="<<e;
else
if(b<c)
	if(b<d)
		if(b<e)
			cout<<endl<<"Smollest value="<<b;
		else
			cout<<endl<<"Smollest value="<<e;
	else
	if(d<e)
		cout<<endl<<"Smollest value="<<d;
	else
		cout<<endl<<"Smollest value="<<e;
else
if(c<d)
	if(c<e)
		cout<<endl<<"Smollest value="<<c;
	else
		cout<<endl<<"Smollest value="<<e;
else
if(d<e)
	cout<<endl<<"Smollest value="<<d;
else
	cout<<endl<<"Smollest value="<<e;
getch();
}
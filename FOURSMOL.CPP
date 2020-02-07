#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
cout<<"Enter any four number:";
cin>>a>>b>>c>>d;
if(a<b)
	if(a<c)
		if(a<d)
			cout<<endl<<"smollest value="<<a;
		else
			cout<<endl<<"Smollest value="<<d;
	else
	if(c<d)
		cout<<endl<<"Smollest value="<<c;
	else
		cout<<endl<<"Smollest value="<<d;
else
if(b<c)
	if(b<d)
		cout<<endl<<"Smollest value="<<b;
	else
		cout<<endl<<"Smollest value="<<d;
else
if(c<d)
	cout<<endl<<"Smollest value="<<c;
else
	cout<<endl<<"Smollest value="<<d;
getch();
}
#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
cout<<"Enter any four number:";
cin>>a>>b>>c>>d;
clrscr();
if(a>b)
	if(a>c)
		if(a>d)
			cout<<endl<<"Highest value="<<a;
		else
			cout<<endl<<"Highest value="<<d;
	else
	if(c>d)
		cout<<endl<<"Highest value="<<c;
	else
		cout<<endl<<"Highest value="<<d;
else
if(b>c)
	if(b>d)
		cout<<endl<<"Highest value="<<b;
	else
		cout<<endl<<"Highest value="<<d;
else
if(c>d)
	cout<<endl<<"Highest value="<<c;
else
	cout<<endl<<"Highest value="<<d;
getch();
}

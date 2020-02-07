#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
cout<<"Enter any three number:";
cin>>a>>b>>c;
if(a>b)
	if(a>c)
		cout<<endl<<"Highest value="<<a;
	else
		cout<<endl<<"Highest value="<<c;
else
   if(b>c)
	cout<<endl<<"Highest value="<<b;
   else
	cout<<endl<<"Highest value="<<c;
getch();
}
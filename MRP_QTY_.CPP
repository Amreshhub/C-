#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
long int pcode;
float mrp,qty,total,dis,pay,vat,net;
clrscr();
a1:cout<<"\nEnter producet code of given Producet:";
//fflush(stdin);
cin>>pcode;
if(pcode<=0)
{
	cout<<"\nInvalied entery found Plz Enter positive value:";
	delay(2000);
	goto a1;
	}
a2:cout<<"\nEnter MRP value of the given producet:";
//fflush(stdin);
cin>>mrp;
if(mrp<=0)
{
	cout<<"\nInvalied entery found Plz enter positive value :";
	delay(2000);
	goto a2;
	}
a3:cout<<"\nEnter quantety tokan of given producet:";
//fflush(stdin);
cin>>qty;
if(qty<=0)
{
	cout<<"\nInvalied entery found plz enter positive value:";
	delay(2000);
	goto a3;
	}
total=mrp*qty;
dis=total*30/100.0;
pay=total-dis;
vat=pay*12.0/100;
net=pay+vat;
clrscr();
cout<<"\n\t\t===============Bill=====================";
cout<<"\n\t\tProducet code=        "<<pcode;
cout<<"\n\t\tMrp in rs=            "<<mrp;
cout<<"\n\t\tQuantety tokan=       "<<qty;
cout<<"\n\t\t=========================================";
cout<<"\n\t\tTotal amount in rs=   "<<total;
cout<<"\n\t\tDiscount amount in Rs="<<dis;
cout<<"\n\t\t=========================================";
cout<<"\n\t\tPaybal amount in Rs=  "<<pay;
cout<<"\n\t\t12%% vat in Rs=       "<<vat;
cout<<"\n\t\t==========================================";
cout<<"\n\t\tNet bill amount in Rs="<<net;
getch();
}

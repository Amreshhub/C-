#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
long int ecode;
float basic,da,hra,total,itax,bonous,net,pay;
const float ma=1000;
clrscr();
a1:cout<<"Enter Empolloy code:";
cin>>ecode;
if(ecode<0)
{
	cout<<"\nInvalied entry found plz enter agan;";
	delay(2000);
	goto a1;
	}
a2:cout<<"\nEnter Basic pay in Rs:";
cin>>basic;
if(basic<=0)
{
	cout<<"\nInvalied entery found Plz enter positive value;";
	delay(2000);
	goto a2;
	}
da=basic*15.0/100;
hra=basic*20.0/100;
total=basic+da+hra+ma;
itax=total*12.0/100;
pay=total-itax;
bonous=pay*10.0/100;
net=pay+bonous;
clrscr();
cout<<"\n\t\t**********************************************************";
cout<<"\n\t\t===================Salary=======================";
cout<<"\n\t\tEmpolly code:                                          "<<ecode;
cout<<"\n\t\tBasic pay in Rs:                                       "<<basic;
cout<<"\n\t\tDearrneass allowance in Rs                   "<<da;
cout<<"\n\t\tHouse rent allowance allowance in Rs:"<<hra;
cout<<"\n\t\tMedacial Allowance in Rs:                    "<<ma;
cout<<"\n\t\t===============================================";
cout<<"\n\t\tGross/Total salary in amount:                "<<total;
cout<<"\n\t\t12%%Income tax in Rs:                        "<<itax;
cout<<"\n\t\t===============================================";
cout<<"\n\t\tPaybal salary in Rs:                                "<<pay;
cout<<"\n\t\t10%%Bonous is Rs:                               "<<bonous;
cout<<"\n\t\t===============================================";
cout<<"\n\t\tNet Salary Amount in Rs:                      "<<net;
cout<<"\n\t\t***********************************************************";
getch();
}

#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
long int ecode;
float basic,da,hra,gross,itax=0.0,net;
const float ma=1500;
clrscr();
a1:cout<<"Enter empolloy code:";
cin>>ecode;
if(ecode<=0)
{
	cout<<endl<<"Invalid entery found plz enter agan:";
	delay(3000);
	goto a1;
	}
a2:cout<<endl<<"Enter basic pay in Rs:";
cin>>basic;
if(basic<=0)
{
	cout<<endl<<"Invalied Entery found plz Enter agan;";
	delay(2000);
	goto a2;
	}
if(basic>=5000)
	da=basic*20/100;
else
	da=basic*15/100;
if(basic>10000)
	hra=basic*30/100;
else
	hra=basic*25/100;
gross=basic+da+hra+ma;
if(gross>15000)
itax=gross*20/100;
net=gross-itax;
clrscr();
cout<<"\t\t=================salay========================";
cout<<endl<<"\t\tEmpolyee code:               "<<ecode;
cout<<endl<<"\t\tBasic pay in rs:             "<<basic;
cout<<endl<<"\t\tDearness alllowance in rs:   "<<da;
cout<<endl<<"\t\tHouse rent allowance in rs:  "<<hra;
cout<<endl<<"\t\tMedical allowance in rs:     "<<ma;
cout<<endl<<"\t\t=========================================";
cout<<endl<<"\t\tGross/Total salary in rs:    "<<gross;
cout<<endl<<"\t\tincome tax deduction in rs:  "<<itax;
cout<<endl<<"\t\t==========================================";
cout<<endl<<"\t\tNet salary in Rs:            "<<net;
getch();
}
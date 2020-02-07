#include<iostream.h>
#include<conio.h>
void main(){
int ptype;
long int icode;
float mrp,qty,total,rate,dis,pay,tot,net;
int a=1;
clrscr();
cout<<"Enter PRoducet type:";
cin>>ptype;
if(ptype==1)
	rate=15;
else
if(ptype==2)
	rate=20;
else
if(ptype==3)
	rate=25;
else
if(ptype==4)
	rate=30;
else
{
cout<<endl<<"Invalied producet type found plz enter agan:";
a=0;
}
if(a){
cout<<endl<<"Enter Iteam code:";
cin>>icode;
if(icode>0){
}
else
{
cout<<endl<<"Invalied iteam code found plz enter agan:";
a=0;} }
if(a){
cout<<endl<<"Enter quantety tokan:";
cin>>qty;
if(qty>0){
}
else{
cout<<endl<<"Invalied quantety tokan Plz enter agan:";
a=0;}}
if(a)
{
cout<<endl<<"Enter Mrp of the given iteam:";
cin>>mrp;
if(mrp>0)
{
total=mrp*qty;
dis=total*rate/100;
pay=total-dis;
tot=pay*1/100;
net=pay+tot;
clrscr();
cout<<endl<<"\t\t*************BILL*************************";
cout<<endl<<"\t\tProducet type:-              "<<ptype;
cout<<endl<<"\t\tIteamcode:-                  "<<icode;
cout<<endl<<"\t\tMrp of the given iteam:-     "<<mrp;
cout<<endl<<"\t\tQuantaty tokan:-	      "<<qty;
cout<<endl<<"\t\t========================================";
cout<<endl<<"\t\tTotal purchage amount in Rs:-"<<total;
cout<<endl<<"\t\tDiscount rate in"<<rate<<"%";
cout<<endl<<"\t\tDiscount amount in Rs:-      "<<dis;
cout<<endl<<"\t\t=========================================";
cout<<endl<<"\t\tPayble amount in Rs:-        "<<pay;
cout<<endl<<"\t\t1% T.O.T in Rs:-             "<<tot;
cout<<endl<<"\t\t=========================================";
cout<<endl<<"\t\tNet bill amount in Rs:-      "<<net;
cout<<endl<<"\t\t*******************************************";
}
else
cout<<endl<<"Invalied mrp found enter agan:";
}
getch();
}
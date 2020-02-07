#include<iostream.h>
#include<conio.h>
void main(){
long int pcode;
float uprice,qty,net;
clrscr();
cout<<"Enter Producet code:";
cin>>pcode;
cout<<"\nEnter Unit price i:e mrp:";
cin>>uprice;
cout<<"\nEnter quantety tokan:";
cin>>qty;
net=uprice*qty;
clrscr();
cout<<"\n\t\t=====Bill=====";
cout<<"\n\t\tProducet code::"<<pcode;
cout<<"\n\t\tUnit price::"<<uprice;
cout<<"\n\t\tQuantety tokan:"<<qty;
cout<<"\n\t\t===================";
cout<<"\n\t\tNet bill amount:"<<net;
getch();
}


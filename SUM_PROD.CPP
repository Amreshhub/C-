#include<iostream.h>
#include<conio.h>
void main(){
float a,b,sum,prod,avg;
clrscr();
cout<<"Enter First number::";
cin>>a;
cout<<"\nEnter second number::";
cin>>b;
sum=a+b;
prod=a*b;
avg=sum/2.0;
clrscr();
cout<<"\nFirst num inputted="<<a;
cout<<"\nSecond num inputted="<<b;
cout<<"\nSum of two number="<<sum;
cout<<"\nProducet of two number="<<prod;
cout<<"\nAverage of two number="<<avg;
getch();
}
//function overloading
#include<iostream.h>
#include<conio.h>
#include<dos.h>
int sum(int a,int b){
return(a+b);
}
int sum(int a,int b,int c){
return(a+b+c);
}
int sum(int a,int b,int c,int d){
return(a+b+c+d);
}
void main(){
int add,n,a,num1,num2,num3,num4;
clrscr();
a1:cout<<"Enter maxcimem 5number do you  want to sum:-";
cin>>n;
if(n>4) {

	cout<<endl<<"invalied number found plz enter agan;";
	delay(2000);
	goto a1;
	}
clrscr();
if(n==2){
cout<<endl<<"Enter 2no:-";cin>>num1>>num2;
add=sum(num1,num2);
cout<<endl<<"Sum of two number:="<<add;}
if(n==3){
cout<<endl<<"Enter any three number";cin>>num1>>num2>>num3;
add=sum(num1,num2,num3);
cout<<endl<<"Sum of three number:="<<add;
}
if(n==4){
cout<<endl<<"Enter any four number:-";cin>>num1>>num2>>num3>>num4;
add=sum(num1,num2,num3,num4);
cout<<endl<<"Sum of four number:="<<add;
}
getch();
}







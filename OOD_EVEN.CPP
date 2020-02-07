#include<iostream.h>
#include<conio.h>
void main(){
int num;
clrscr();
cout<<"Enter a number:";
cin>>num;
if(num>0)
	if(num%2==0)
		cout<<endl<<"Given no"<<num<<"is positive even";
	else
		cout<<endl<<"Given no"<<num<<"positive odd";
else
cout<<endl<<"Given no"<<num<<"is negetive no";
getch();
}
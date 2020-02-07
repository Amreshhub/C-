#include<iostream.h>
#include<conio.h>
void main(){
int num;
clrscr();
cout<<"\nEnter a number:";
cin>>num;
if(num%2)
	cout<<"\nGiven number is odd";
else
	cout<<"\nGiven number is even";
getch();
}
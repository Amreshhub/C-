#include<iostream.h>
#include<conio.h>
int g;
void main(){
extern int h;
clrscr();
cout<<"\nValue in global var g="<<g;
cout<<"\nvalue in global var h="<<h;
h=90;
cout<<"\nvalue in global var h="<<h;
getch();
}
int h;
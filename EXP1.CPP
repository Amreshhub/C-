#include<iostream.h>
#include<conio.h>
void main(){
int ctr=1;
clrscr();
while(ctr<4){
{
static int a;
cout<<"\nvalue in vara="<<a;
a=a+1;
}
ctr++;
}//close of while
getch();
}
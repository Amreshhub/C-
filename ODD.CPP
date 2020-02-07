//wap in c++ to accept n numbers and print given number even or odd
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
int even=0,odd=0,num,n,a;
clrscr();
f1:cout<<endl<<"Enter How many number do you want to Enter:-";
cin>>n;
if(n<=0)
{
	cout<<endl<<"Invalied number found Plz enter positive value";
	delay(2000);
	goto f1;
	}
for(a=1;a<=n;a++)
{
	cout<<endl<<"Enter number"<<a<<":-";
	cin>>num;
if(num%2==0)
	even++;
else
	odd++;
	}
cout<<endl<<"Total count of even="<<even;
cout<<endl<<"Total count of odd="<<odd;
getch();
}//close of main



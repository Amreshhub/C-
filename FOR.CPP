//program based on for loop
#include<iostream.h>
#include<conio.h>
void main(){
int n,a,sum=0,num;
clrscr();
cout<<endl<<"How many number do you want to enter:-";
cin>>n;
for(a=0;a<n;a++)
{
	cout<<endl<<"Enter Number"<<a+1;
	cin>>num;
	sum=sum+num;
	}
cout<<endl<<"Sum of number="<<sum;
getch();
}//close of main

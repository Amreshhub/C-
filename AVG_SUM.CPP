//wap ic cpp to accpet n number calculate and display sum and avg value
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
int sum=0,avg=0,a,n,num;
clrscr();
s1:cout<<endl<<"How many number do you want to Enter:-";
cin>>n;
if(n<=0)
{
	cout<<endl<<"Invalied number found PLZ enter agan:";
	delay(3000);
	goto s1;
	}
for(a=1;a<=n;a++)
{
	cout<<endl<<"Enter number"<<a<<":-";
	cin>>num;
	sum=sum+num;
	}
	avg=sum/n;
cout<<endl<<"Sum of "<<n <<"number"<<"="<<sum;
cout<<endl<<"Average value of"<<n <<"number"<<"="<<avg;
getch();
}//close of main
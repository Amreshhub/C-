//program to show template function
#include<iostream.h>
#include<conio.h>
template<class a>
a sum(a no1,a no2)
{
	return(no1+no2);
	}

void main(){
clrscr();
cout<<endl<<"Sum of two  interger number:-"<<sum(20,20);
cout<<endl<<"Sum of two  Long interger number:-"<<sum(3276,4);
cout<<endl<<"Sum of two  float/real number:-"<<sum(5.1,5.4);
//cout<<endl<<"Sum of two  double number:-"<<sum(345678.454,34564,5678);
getch();
}
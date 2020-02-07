//example to show template class or ganric class
#include<iostream.h>
#include<conio.h>
//defining templeate class
template<class x>
class addtion{
 x num1,num2;
 public: addtion();
	 addtion(x,x);
	 x sum();
	 void accpet(x,x);
	// x disp();
	 };
 template<class x>addtion<x>::addtion(){
 num1=num2=0;
 }
 template<class x>addtion<x>::addtion(x a, x b){
 num1=a;
 num2=b;
 }
 template<class x>::accpet(x a,x b){
 num1=a;
 num2=b;
 }
 template<class x>addtion<x>::sum(){

 return(num1+num2);
 }
 //template<class x>addtion<x>::disp(){
// cout<<endl<<"Sum of two no:-"<<s;
 //}
 void main(){
 clrscr();
 float a,b;
 addtion<int> ad(10,10);
 cout<<endl<<"Sum of two no:-"<<ad.sum();
 //operating on float/real number
 addtion<float> ad1;
 cout<<endl<<"Enter two number:-";
 cin>>a>>b;
 ad1.accpet(a,b);
 cout<<endl<<"Sum of two no:-"<<ad1.sum();
 getch();
 }//close of main
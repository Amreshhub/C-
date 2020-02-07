#include<iostream.h>
#include<conio.h>
class submition{
private: int a,b,add;
public:void input(){
cout<<"\nEnter two number";
cin>>a>>b;
}
void sum(){
add=a+b;
}
void display(){
cout<<"\nSum of two number="<<add;
}
};
void main(){
submition x;
clrscr();
x.input();
x.sum();
x.display();
getch();
}
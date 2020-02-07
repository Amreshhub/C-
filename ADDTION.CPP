#include<iostream.h>
#include<conio.h>
class addtion{
int a,b,add;
public:void input(){
cout<<"\nEnter any two number";
cin>>a>>b;
}
void sum(){
add=a+b;
}
void display(){
cout<<"\nSum of two nnumber:"<<add;
}
};
void main(){
clrscr();
addtion x,*px;
px=&x;
px->input();
px->sum();
px->display();
getch();
}


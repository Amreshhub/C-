//implimenting used of destroutor in case of inharitance
#include<iostream.h>
#include<conio.h>
#include<string.h>
//defining base class
class base
{
	char *bstr;
protected:base(){
cout<<endl<<"Base class default constrocter called";
bstr='\0';
}
base(char *pstr){
cout<<endl<<"Base class overloaded constrector called";
bstr=new char[strlen(pstr)+1];
strcpy(bstr,pstr);
}
void accept(char *pstr){
delete[]bstr;
bstr=new char[strlen(pstr)+1];
strcpy(bstr,pstr);
}
void disp(){
cout<<endl<<"value in base mamber data:"<<bstr;
}
~base(){
cout<<endl<<"Base class destroctor called";
delete[]bstr;
}
};//close of base class
//define derived class
class derived:public base{
	char *dstr;
public:derived(){
cout<<endl<<"Derived class default constractor called";
dstr='\0';
}
derived(char *pstar1,char *pstar2):base(pstar1){
cout<<endl<<"Derived class overlodad constrector called";
dstr=pstar2;
}
void accept(char *pstr1,char *pstr2){
delete[]dstr;
base::accept(pstr1);
dstr=new char[strlen(pstr2)+1];
strcpy(dstr,pstr2);
}
void disp(){
cout<<endl<<"Derived class disp() function called";
base::disp();
cout<<endl<<"Derived class mamber data value:"<<dstr;
}
~derived(){
cout<<endl<<"Derived class destrocteor called";
delete[]dstr;
}
};// close of derived class
void main(){
clrscr();
{
derived x("amresh","anu");
x.disp();
}
getch();
}//close of main
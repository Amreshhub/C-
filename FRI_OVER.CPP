//program based on opertor overlodading
#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char *str;
public:
	string();
	string(char*);
	string(const string&);
	void input(char*);
	void display();
	friend string operator+(const string&,const string&);
	~string();
};//close of class
string::string()
{
	cout<<endl<<"Default constroctor called";
	str='\0';
	}//close of function
string::string(char *pstr)
{
cout<<endl<<"Overlodaed constrocter called";
str=new char[strlen(pstr)+1];
strcpy(str,pstr);
}//close of function
string::string(const string&a)
{
cout<<endl<<"Copy constrector called";
str=new char[strlen(a.str)+1];
strcpy(this->str,a.str);
}//close of function
void string::input(char *pstr2)
{
delete[]str;
str=new char[strlen(pstr2)+1];
strcpy(str,pstr2);
}
void string::display()
{
	cout<<endl<<"Stored string :-"<<str;
	}
 string operator+(const string&e,const string&f)
{
string temp;
temp.str=new char [strlen(e.str)+strlen(f.str)+1];
strcpy(temp.str,e.str);
strcat(temp.str,f.str);
return(temp.str);
}
string::~string()
{
	delete[]str;
}
void main(){
clrscr();
string x,y("amresh"),z("kumar"),p("2012"),j("don");
y.display();
z.display();
x=y+z+p+j;
x.display();
getch();
}//close of main

//wap in cpp to overaded '+' opretor to concatnate two string
#include<iostream.h>
#include<conio.h>
#include <string.h>
class string
{
	char *str;
public: string();
	string(char *);
	string(const string &);
	void input(char *);
	void display();
	string operator+(const string &);
	~string();
	};//close of class
string::string(){
cout<<endl<<"Default constructor called";
str='\0';
}//close of function
	string::string(char *pstr){
	cout<<endl<<"Overlodaded constructor called";
	str=new char[strlen(pstr)+1];
	strcpy(str,pstr);
	}//close of function
		string::string(const string &a){
		cout<<endl<<"Copy constructer called";
		this->str=new char[strlen(a.str)+1];
		strcpy(this->str,a.str);
		}//close of function
			void string::input(char *pstr1){
			str=new char[strlen(pstr1)+1];
			strcpy(str,pstr1);
			}//close of function
				void string::display(){
				cout<<endl<<"Stroed string is="<<str;
				}//close of function
					string string operator+(const string &s)
					{
					string temp;
					temp.str=new char [strlen(this->str)+strlen(s.str)+1];
					strcpy(temp.str,this->str);
					strcat(temp.str,s.str);
					return(temp);
					}//close of function
					string::~string(){
					delete[]str;
					}//close of function
		void main(){
		clrscr();
		string x,y("AMRESH"),z("KUMAR"),v(z);
		x.display();
		y.display();
		z.display();
		v.dislpay();
		x=y+z;
		cout<<endl<<"Sum of two object:";
		x.display();





		getch();
		}//close of main


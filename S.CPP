//program based on static data maeber
#include<iostream.h>
#include<conio.h>
class string
{
	char name;
	static char name2;
public:string(){
name2='\0';name='\0';
}
	string(char name ,static name2){
	this->name=name;
	this->name2=name2;
	}
	string(const string &a){
	name=a.name;